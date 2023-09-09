
#include<bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;

bool can(ll N)
{
    vector<bool> dp(N + 1, false);
    dp[1] = true;
    for (ll i = 1; i <= N; ++i)
    {
        if (dp[i])
        {

            if (i + 3 <= N)
            {
                dp[i + 3] = true;
            }
            if (i * 2 <= N)
            {
                dp[i * 2] = true;
            }
        }
    }

    return dp[N];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;

        if (can(N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
