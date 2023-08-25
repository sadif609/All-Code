


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n;
    cin>>n;
    vector<pi>v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


}
