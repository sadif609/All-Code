// Ashiqul Islam sadif

#define N  INT_MAX
#include<bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;


void solve()
{
    int n;
    cin >> n;
    ll k = 0;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    vector<int> v2;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v2.push_back(i);
            if (i != n / i)
            {
                v2.push_back(n / i);
            }
        }
    }

    for (int it : v2)
    {
        ll mn = LLONG_MAX, mx = 0;
        for (int i = it; i <= n; i += it)
        {
            mn = min(mn, v[i] - v[i - it]);
            mx = max(mx, v[i] - v[i - it]);
        }
        k = max(k, mx - mn);
    }
    cout << k << endl;
}

signed main()
{
    int t;
    cin >> t;

    while (t-- )
    {
        solve();

    }

    return 0;
}
