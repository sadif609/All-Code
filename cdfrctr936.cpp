#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b, long long m) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> vec(n);
        for (auto &x : vec)
            cin >> x;

        long long mx = 0;
        for (auto x : vec) {
            mx += x;
            mx %= MOD;
            if (mx < 0)
                mx += MOD;
        }

        long long cr_sm = 0, max_pa = 0;
        for (auto x : vec) {
            cr_sm += x;
            cr_sm %= MOD;
            if (cr_sm < 0)
                cr_sm = 0;
            max_pa = max(max_pa, cr_sm);
        }

        int ans = ((max_pa * (power(2, k, MOD) - 1 + MOD) % MOD) + mx) % MOD;
        if (ans < 0)
            ans += MOD;

        cout << ans << '\n';
    }

    return 0;
}
