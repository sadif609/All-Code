
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
   ll k,s;
   cin>>k>>s;
   ll x=0;
   for(ll i=0;i<=k;i++)
   {
       for(ll j=0;j<=k;j++)
        if(s-i-j<=k && s-i-j>=0)
        x++;
   }
   cout<<x<<endl;
}
