
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+9;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=1; i<=n; i++) cin>>a[i];
   ll ans = 0;
    for(ll i=n-1; i>=1; i--)
    {
        if(a[i]!=a[n])
        {
            ans++;
            i = i-(n-1-i);
        }
    }
    cout<<ans<<endl;





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
