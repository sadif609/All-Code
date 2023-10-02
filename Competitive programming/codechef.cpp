#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

long long countValidPermutations(int N, int K, vector<int>& A) {
    vector<long long> dp(N + 1);
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i] = (dp[i - 1] * i) % MOD;
    }

    long long odd_count = 0, even_count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (K == 0 && odd_count == 0) {
        return dp[N];
    }

    long long result = 0;

    for (int i = 0; i <= odd_count; i++) {
        if ((i % 2 == K) || (K == 0 && i == 0)) {
            long long ways = (dp[odd_count] * dp[even_count]) % MOD;
            ways = (ways * dp[N - 1]) % MOD;
            ways = (ways * dp[i]) % MOD;
            ways = (ways * dp[odd_count - i]) % MOD;
            result = (result + ways) % MOD;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long answer = countValidPermutations(N, K, A);
        cout << answer << endl;
    }

    return 0;
}
