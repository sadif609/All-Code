#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0 ; i < n ; i ++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll ans = n+1;
    for(ll i=0; i<n; i++)
    {
        sum+=a[i];
        ll len=0;
        ll act=0;
        ll thickness = i+1;

        bool ok=true;
        for(ll j=i+1; j<n; j++)
        {
            act+=a[j];
            len++;
            if(act>sum)
            {

                ok=false;
                break;
            }
            else if(act==sum)
            {
                thickness = max(thickness,len);
                act=0;
                len=0;

            }
        }
        if(ok && act==0)
        {

            ans=min(ans,thickness);
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
