#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
SoftwareSerial ser(9, 10);

float pulse = 0, temp = 0;
int pulsePin = A0, blinkPin = 7, fadePin = 13, fadeRate = 0;
int BPM, Signal, IBI = 600;
boolean Pulse = false, QS = false, serialVisual = true, firstBeat = true, secondBeat = false;

volatile unsigned long sampleCounter = 0, lastBeatTime = 0;
volatile int P = 512, T = 512, thresh = 525, amp = 100, rate[10];

void setup() {
  lcd.begin(16, 2);
  pinMode(blinkPin, OUTPUT);
  pinMode(fadePin, OUTPUT);
  Serial.begin(115200);
  interruptSetup();

  lcd.clear();
  lcd.print(" Patient Health");
  lcd.setCursor(0, 1);
  lcd.print(" Monitoring ");
  delay(4000);
  lcd.clear();
  lcd.print("Initializing....");
  delay(5000);
  lcd.clear();
  lcd.print("Getting Data....");
  ser.begin(9600);
  delay(1000);
}

void loop() {
  serialOutput();
  if (QS) {
    fadeRate = 255;
    serialOutputWhenBeatHappens();
    QS = false;
  }
  ledFadeToBeat();
  delay(20);
  read_temp();
}

void ledFadeToBeat() {
  fadeRate = constrain(fadeRate - 15, 0, 255);
  analogWrite(fadePin, fadeRate);
}

void interruptSetup() {
  TCCR2A = 0x02;
  TCCR2B = 0x06;
  OCR2A = 0X7C;
  TIMSK2 = 0x02;
  sei();
}

void serialOutput() {
  if (serialVisual) {
    arduinoSerialMonitorVisual('-', Signal);
  } else {
    sendDataToSerial('S', Signal);
  }
}

void serialOutputWhenBeatHappens() {
  if (serialVisual) {
    Serial.print(" Heart-Beat ");
    Serial.print("BPM: ");
    Serial.println(BPM);
  } else {
    sendDataToSerial('B', BPM);
    sendDataToSerial('Q', IBI);
  }
}

void arduinoSerialMonitorVisual(char symbol, int data) {
  const int sensorMin = 0, sensorMax = 1024;
  int range = map(data, sensorMin, sensorMax, 0, 11);

  for (int i = 0; i < range; i++) {
    Serial.print("-");
  }
  Serial.println("");
}

void sendDataToSerial(char symbol, int data) {
  Serial.print(symbol);
  Serial.println(data);
}

ISR(TIMER2_COMPA_vect) {
  cli();
  Signal = analogRead(pulsePin);
  sampleCounter += 2;
  int N = sampleCounter - lastBeatTime;

  if (Signal < thresh && N > (IBI / 5) * 3) {
    if (Signal < T) T = Signal;
  }
  if (Signal > thresh && Signal > P) P = Signal;

  if (N > 250) {
    if (Signal > thresh && !Pulse && N > (IBI / 5) * 3) {
      Pulse = true;
      digitalWrite(blinkPin, HIGH);
      IBI = sampleCounter - lastBeatTime;
      lastBeatTime = sampleCounter;

      if (secondBeat) {
        secondBeat = false;
        for (int i = 0; i < 10; i++) rate[i] = IBI;
      }
      if (firstBeat) {
        firstBeat = false;
        secondBeat = true;
        sei();
        return;
      }

      word runningTotal = 0;
      for (int i = 0; i < 9; i++) {
        rate[i] = rate[i + 1];
        runningTotal += rate[i];
      }
      rate[9] = IBI;
      runningTotal += rate[9];
      runningTotal /= 10;
      BPM = 60000 / runningTotal;
      QS = true;
      pulse = BPM;
    }
  }

  if (Signal < thresh && Pulse) {
    digitalWrite(blinkPin, LOW);
    Pulse = false;
    amp = P - T;
    thresh = amp / 2 + T;
    P = thresh;
    T = thresh;
  }

  if (N > 2500) {
    thresh = 512;
    P = 512;
    T = 512;
    lastBeatTime = sampleCounter;
    firstBeat = true;
    secondBeat = false;
  }

  sei();
}

void read_temp() {
  int temp_val = analogRead(A1);
  float mv = (temp_val / 1024.0) * 5000;
  float cel = mv / 10;
  temp = ((cel - 2) * 9) / 5 + 32;
  Serial.print("Temperature:");
  Serial.println(temp);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("BPM :");
  lcd.setCursor(7, 0);
  lcd.print(BPM);
  lcd.setCursor(0, 1);
  lcd.print("Temp.:");
  lcd.setCursor(7, 1);
  lcd.print(temp);
  lcd.setCursor(13, 1);
  lcd.print("F");

  delay(3000);
}
