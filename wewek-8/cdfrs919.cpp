#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    set<long long> st(a.begin(), a.end());

    long long ans = LLONG_MAX;

    if (!k)
        ans = *st.begin();
    else if (k == 1) {
        sort(a.begin(), a.end());
        for (int i = 1; i < n; ++i)
            ans = min(ans, a[i] - a[i - 1]);
    } else if (k == 2) {
        for (int i = 0; i < n - 1; ++i)
            ans = min(ans, abs(a[i] - a[i + 1]));
    } else {
        ans = 0;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;

    while (test_case--) {
        solve();
    }

    return 0;
}
