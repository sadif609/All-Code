
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n,k;
   cin>>n>>k;
   ll s=0;
   while(n<=k)
   {
       s++;
       n*=2;
   }
   cout<<s<<endl;
}
