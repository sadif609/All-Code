#include<bits/stdc++.h>
#define ll long long
#define N  INT_MAX
using namespace std;


int binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
    ll base = 1;

    ll temp = num;
    while (temp)
    {
        ll last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}



int main()
{

    string s,part;
    cin>>s;
    ll k=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]!='.')
        {
             part.push_back(s[i]);
        }

        if(s[i]=='.' || i==s.size()-1)
        {
            stringstream ss;
            ss << part;
            ll n =0 ;
            ss >> n;
            part.clear();
            cout<< binaryToDecimal(n);
            if(i!=s.size()-1)
                cout<<".";


        }

    }
    cout<<endl;


}
