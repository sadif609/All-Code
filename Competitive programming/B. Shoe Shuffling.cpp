
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    ll a[n+1]={-1};
    for(ll i=1; i<=n; i++)
        cin>>a[i];
    ll k=1;
    for(ll i=1; i<=n; i++)
    {
        if(a[i]!=a[i-1] && a[i]!=a[i+1])
            k=0;

    }
    if(k)
    {
        ll j=1;
        for(ll i=1; i<=n; i++)
        {
            if(a[i+1]!=a[i])
            {
                cout<<j<<" ";
                j=i+1;
            }
            else
                cout<<i+1<<" ";

        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;





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
