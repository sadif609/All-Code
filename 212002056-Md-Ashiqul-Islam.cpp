// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define mod 1000000007
#define fr(i, s, n) for (ll i = s; i < n; i++)
const double PI = 3.141592653589793238460;
const ss A = "01000111";
const ss FLAG = "01111110";
const ss ESC = "11100000";

ss ctb(char c)
{
    switch (c)
    {
    case 'A':
        return A;
    case 'F':
        return FLAG;
    case 'E':
        return ESC;
    default:
        return "";
    }
}

ss sTbnry(const ss& s)
{
    ss bout;
    for (char c : s)
    {
        bout += ctb(c) + " ";
    }
    return bout;
}

ss crcStf(const ss& s, const ss& flagWord, const ss& escapeWord)
{
    ss sout;
    sout += flagWord;

    for (size_t i = 0; i < s.size(); i += 8)
    {
        ss byte = s.substr(i, 8);
        if (byte == flagWord || byte == escapeWord)
        {
            sout += escapeWord;
        }
        sout += byte;
    }

    sout += flagWord;

    return sout;
}

ss crcDStf(const ss& s, const ss& flagWord, const ss& escapeWord)
{
    ss dout;
    size_t pos = flagWord.size();
    size_t end = s.size() - flagWord.size();

    while (pos < end)
    {
        ss byte = s.substr(pos, 8);
        if (byte == escapeWord)
        {
            pos += 8;
            byte = s.substr(pos, 8);
        }
        dout += byte;
        pos += 8;
    }

    return dout;
}

int main()
{
    ss s = "FAEAF";

    cout << "Character to Binary " << endl;
    for (char c : s)
    {
        cout << c << ": " << ctb(c) << endl;
    }

    ss binaryInput;
    for (char c : s)
    {
        binaryInput += ctb(c);
    }

    cout << "\nBinary input: " << binaryInput << endl;

    ss stf = crcStf(binaryInput, FLAG, ESC);
    cout << "\nStuffed output: " << stf << endl;

    ss dtf = crcDStf(stf, FLAG, ESC);
    cout << "\nDestuffed output: " << dtf << endl;

    ss DcMsg;
    for (size_t i = 0; i < dtf.size(); i += 8)
    {
        ss byte = dtf.substr(i, 8);
        if (byte == A)
        {
            DcMsg += 'A';
        }
        else if (byte == FLAG)
        {
            DcMsg += 'F';
        }
        else if (byte == ESC)
        {
            DcMsg += 'E';
        }
    }
    cout << "\nDecoded message: " << DcMsg << endl;

    return 0;
}
