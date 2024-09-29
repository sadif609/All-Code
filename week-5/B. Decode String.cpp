#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v,v2;
    for( ll i=s.size()-1; i>=0; i--)
    {
        ll k;
        char c;
        ll a=0;
        if(s[i]=='0')
        {

            a=(s[i-2]-'0')*10+(s[i-1]-'0');

            i=i-2;
        }
        else
        {
            a=s[i]-'0';

        }
        c=a+96;
        v.push_back(c);

    }
    reverse(v.begin(),v.end());
    for(auto x:v)
        cout<<x;
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
}
