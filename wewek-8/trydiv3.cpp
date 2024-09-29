#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<pair<int, int>> v;
        v.reserve(n);
        for (int i = 0; i < n; ++i) {
            v.emplace_back(a[i] + b[i], i);
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int index = v[i].second;
            if (i % 2 == 0) {
                ans += static_cast<long long>(a[index]) - 1;
            } else {
                ans -= static_cast<long long>(b[index]) - 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
