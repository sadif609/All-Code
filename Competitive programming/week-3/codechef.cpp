#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<pair<ll,ll>>vp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            vp.push_back({v[i],i});
        }
        sort(vp.rbegin(),vp.rend());
        ll mx=v[0];
        for(ll i=0;i<vp[0].second;i++)
        {
            mx=max(mx,v[i]);
        }
        mx=v[n-1];
        for(ll i=n-1;i>vp[0].second;i--)
        {
            mx=max(mx,v[i]);
        }
        ll s=0;
        for(ll i=0;i<n;i++)
        {
            s+=v[i];
        }
        cout<<s<<endl;

    }
}
