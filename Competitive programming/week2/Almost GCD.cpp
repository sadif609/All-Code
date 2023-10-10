
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+5;

main()
{
ll n;
cin>>n;
ll a[1006];
memset(a,0,sizeof(a));
for(ll i=0;i<n;i++)
{
    ll x;
    cin>>x;
    for(ll j=2;j<=1000;j++)
        if(x%j==0)
        a[j]++;

}
ll k=0,m=-1;
for(ll i=2;i<=1000;i++)
{
    if(a[i]>m)
    {
        m=a[i];
        k=i;
    }
}
cout<<k;

}
