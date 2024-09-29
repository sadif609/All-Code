#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n, k, d;
    cin >> n >> k >> d;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> vk(k);
    for (long long i = 0; i < k; i++) {
        cin >> vk[i];
    }

    vector<long long> cost(2002, 0);
    long long cnt = 0;

    for (long long i = 0; i < n; i++) {
        if (arr[i] == (i + 1)) {
            cnt++;
        }
    }
    cost[0] = cnt;

    for (long long i = 0; i <= 2000; i++) {
        long long idx = i % k;
        long long bk = vk[idx];
        cnt = 0;

        for (long long j = 0; j < bk; j++) {
            arr[j] += 1;
        }

        for (long long j = 0; j < n; j++) {
            if (arr[j] == (j + 1)) {
                cnt++;
            }
        }
        cost[i + 1] = cnt;
    }

    long long ans = 0;
    for (long long i = 0; i <= min(d - 1, 2001LL); i++) {
        long long ct = cost[i] + (d - i - 1) / 2;
        ans = max(ans, ct);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
