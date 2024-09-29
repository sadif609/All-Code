#include <bits/stdc++.h>
using namespace std;

const int INF = 1e18;

bool check(int n, vector<int>& arr, int total, int addVal) {
    vector<int> tmpArr = arr;
    tmpArr[n - 1] += addVal;
    int newTotal = total + addVal;
    double avg = newTotal / (2.0 * n);
    return count_if(tmpArr.begin(), tmpArr.end(), [&](int w) { return w < avg; }) > n / 2;
}

int binarySearch(int n, vector<int>& arr, int sum) {
    int l = 0, r = INF, res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(n, arr, sum, mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

void handleCase() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = accumulate(arr.begin(), arr.end(), 0, [&](int &s, int &x) {
        cin >> x;
        return s + x;
    });

    if (n < 3) {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    cout << binarySearch(n, arr, sum) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    generate_n(ostream_iterator<void>(cout), t, handleCase);

    return 0;
}
