
#include <iostream>
#include <sstream>
#include <bitset>
#include <regex>

using namespace std;


bool isValidIPv4(const string& ip) {
    regex pattern("(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)");
    return regex_match(ip, pattern);
}


string ipToBinary(const string& ip) {
    stringstream ss(ip);
    string token;
    string binaryIP = "";

    while (getline(ss, token, '.')) {
        int num = stoi(token);
        binaryIP += bitset<8>(num).to_string();
    }

    return binaryIP;
}


string binaryToIp(const string& binaryIP) {
    string ip = "";
    for (int i = 0; i < 32; i += 8) {
        int num = bitset<8>(binaryIP.substr(i, 8)).to_ulong();
        ip += to_string(num);
        if (i < 24)
            ip += ".";
    }
    return ip;
}

int main() {
    string ipAddress;
    char choice;

    cout << "Enter the IP address: ";
    cin >> ipAddress;


    bool isIPv4 = isValidIPv4(ipAddress);

    if (isIPv4) {
        cout << "Choose conversion option:" << endl;
        cout << "1. Convert IPv4 address to binary" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Binary IP: " << ipToBinary(ipAddress) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } else {
        cout << "Choose conversion option:" << endl;
        cout << "1. Convert binary IP address to IPv4" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "IPv4 address: " << binaryToIp(ipAddress) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }

    return 0;
}
