
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    ll k = 0;
    vector<ll>v;

    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;

        while(x%2 == 0)
        {
            k++;
            x /= 2;
        }

        ll j = i;
        ll temp = 0;
        while(j%2 == 0)
        {
            temp++;
            j /= 2;

        }
        v.push_back(temp);
    }

    sort(v.rbegin(), v.rend());

    if(k>=n) cout<<0<<endl;
    else
    {
        ll ans = 0;
        for(int i=0; i<v.size(); i++)
        {
            k += v[i];
            ans++;
            if(k>=n)
            {
                cout<<ans<<endl;
                break;
            }
        }
        if(k<n) cout<<-1<<endl;
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

