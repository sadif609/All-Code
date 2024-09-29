#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n];
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> ans(n);
    ans[0] = a[0];
    long long val = a[0];

    for (long long i = 1; i < n; ++i) {
        val += a[i];
        if (val & 1) {
            ans[i] = val - 1;
        } else {
            ans[i] = val;
        }
    }

    for (long long i = 0; i < n - 1; ++i) {
        if (ans[i] == ans[i + 1]) {
            ans[i] -= 2;
        }
    }

    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
