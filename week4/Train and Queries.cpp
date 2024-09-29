
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp,mf;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        if(mp[x]==0)
            mp[x]=i;
        mf[x]=i;

    }
    for(ll i=0; i<m; i++)
    {
        ll x,y;
        cin>>x>>y;
        if(mp[x]!=0 && mp[y]!=0 && mf[y]>=mp[x])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

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
