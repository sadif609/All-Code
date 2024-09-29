
// Ashiqul Islam sadif
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define fr(i, s, n) for (ll i = s; i < n; i++)
ss fx = "01111110";

ss bitStuffing(const ss& s)
{
    ss output = fx;

    ss a = s.substr(8, s.size() - 16);
    int k = 0;

    for (char c : a)
    {
        output += c;

        if (c == '1')
        {
            k++;
            if (k == 5)
            {
                output += '0';
                k = 0;
            }
        }
        else
        {
            k = 0;
        }
    }

    output += fx;
    return output;
}

ss bitDestuffing(const ss& s)
{
    ss output = fx;

    ss a = s.substr(8, s.size() - 16);
    int k = 0;
    bool stuffed = false;

    for (char c : a)
    {
        if (stuffed)
        {
            if (c == '0')
            {
                output += '1';
                stuffed = false;
            }
            else
            {
                output += c;
                k = 0;
            }
        }
        else
        {
            output += c;
            if (c == '1')
            {
                k++;
                if (k == 5)
                {
                    stuffed = true;
                    k = 0;
                }
            }
            else
            {
                k = 0;
            }
        }
    }

    output += fx;

    return output;
}

int main()
{
    ss s;

    cout << "Enter the data sequence (including fixed header and trailer): ";
    getline(cin, s);
    cout<<"\n\n MD Ashiqul Islam Sadif \t ID : 212002056 \n"<<endl;
    ss stuffed = bitStuffing(s);
    cout << " Stuffing: " << stuffed << endl;
    cout<<endl;

    ss destuffed = bitDestuffing(stuffed);
    cout << "Destuffing: " << destuffed << endl;

    return 0;
}
