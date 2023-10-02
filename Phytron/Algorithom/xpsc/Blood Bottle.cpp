
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    string s;
    cin>>s;
    ll a=0,b=0,c=0,d=0;
    vector<ll>v;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
           a++;

        }
        else{
               v.push_back(a);
            a=0;

        }
    }
    v.push_back(a);
    ll sm=0;
   if(s[0]=='1')
   {
       for(ll i=1;i<v.size();i=i+2)
       {
           sm+=v[i];

       }
   }
    if(s[s.size()-1]=='1')
   {
       for(ll i=v.size()-1;i>=0;i=i-2)
       {
           sm+=v[i];

       }
   }
   cout<<sm<<endl;


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
