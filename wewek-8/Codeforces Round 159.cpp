#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef vector<ll> vli;

void solveTestCase() {
    ll n;
    cin >> n;

    vli v(n);
    map<ll, ll> mp;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mp[v[i]]++;
    }

    sort(v.begin(), v.end());

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    ll gcd = v[n - 1] - v[n - 2];

    for (int i = n - 3; i >= 0; --i) {
        gcd = __gcd(gcd, (v[n - 1] - v[i]));
    }

    ll ans = 0;

    for (int i = 0; i < n; ++i) {
        ans += (v[n - 1] - v[i]) / gcd;
    }

    ll curr = v[n - 1];
    while (mp.find(curr) != mp.end()) {
        curr -= gcd;
    }

    cout << ans + ((v[n - 1] - curr) / gcd) << endl;
}

int main() {
    ll test_cases;
    cin >> test_cases;

    while (test_cases--) {
        solveTestCase();
    }

    return 0;
}
