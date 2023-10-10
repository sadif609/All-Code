

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n;
    cin>>n;
    ll a[n];
    ll s=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll x,y;
        ll sm=0;
        cin>>x>>y;
        for(ll j=0; j<x; j++)
            sm+=a[j];
        if(y<n)
        {
            for(ll j=y+1; j<n; j++)
                sm+=a[j];
        }
        cout<<s-sm<<endl;
    }






}
