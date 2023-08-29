
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n,m,mx=0,k=0,y=0;
    vector<ll>v;
    cin>>n>>m;
    for (ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        y=(x+m-1) /m;
        if(y>=mx)
        {
            k=i;
            mx=y;
        }
    }
    cout<<k;


}
