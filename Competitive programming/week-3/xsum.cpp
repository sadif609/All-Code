
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[300][300];
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
            cin>>a[i][j];
    ll x,y,z=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            x=-a[i][j];
            for(ll k=0; k<n; k++)
            {
                y=abs(i-k);
                if(j>=y)
                    x+=a[k][j-y];
                if(j+y<m)
                    x+=a[k][j+y];
            }
            z=max(z,x);
        }
    }
    cout<<z<<endl;

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
