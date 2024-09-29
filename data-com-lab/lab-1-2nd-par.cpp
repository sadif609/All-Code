// Ashiqul Islam sadif
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define fr(i, s, n) for (ll i = s; i < n; i++)
using namespace std;


ss ipToBinary(const ss& ip)
{
    stringstream ss2(ip);
    ss a;
    ss bIP = "";

    while (getline(ss2, a, '.'))
    {
        int num = stoi(a);
        bIP += bitset<8>(num).to_string();
    }

    return bIP;
}


ss binaryToIp(const ss& bIP)
{
    ss ip = "";
    for (int i = 0; i < 32; i += 8)
    {
        int num = bitset<8>(bIP.substr(i, 8)).to_ulong();
        ip += to_string(num);
        if (i < 24)
            ip += ".";
    }
    return ip;
}

int main()
{
    ss ip;
    char c;

    cout << "Choose conversion option:" << endl;
    cout << "1. Convert IPv4 address to binary" << endl;
    cout << "2. Convert binary IP address to IPv4" << endl;
    cout << "Enter your choice: ";
    cin >> c;

    switch (c)
    {
    case '1':
        cout << "Enter the IPv4 address: ";
        cin >> ip;
         cout<<"\n\n MD Ashiqul Islam Sadif \t ID : 212002056 \n"<<endl;
        cout<<"Binary Ip : "<<ipToBinary(ip)<<endl;
        break;

    case '2':
        cout << "Enter the binary IP address: ";
        cin >> ip;

        if (ip.size() == 32){
             cout<<"\n\n MD Ashiqul Islam Sadif \t ID : 212002056 \n"<<endl;
            cout << "IPv4 address: " << binaryToIp(ip) << endl;
        }

        else
            cout << "Invalid binary IP address!" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
