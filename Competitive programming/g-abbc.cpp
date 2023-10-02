
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    string s;
    cin>>s;
    ll a=0,b=0,c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
            a++;
        else
        {

            b+=a;
            c++;
            a=0;
        }
    }
    if(c)
        cout<<a+b<<endl;
    else
        cout<<0<<endl;


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
