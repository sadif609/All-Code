#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countWays(int a, int b, int x, int y, int p, int q, int steps) {
    // Initialize a hash map to store the counts for each position at each step
    unordered_map<int, unordered_map<int, int>> dp;

    // Base case: at step 0, the starting point is the only reachable point
    dp[p][q] = 1;

    // Possible movement directions
    vector<pair<int, int>> directions = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    // Dynamic programming to count the number of ways to reach (x, y) in 'steps' steps
    for (int step = 0; step < steps; ++step) {
        unordered_map<int, unordered_map<int, int>> new_dp;

        for (auto& [i, j] : dp) {
            for (auto& [u, count] : j) {
                for (auto& dir : directions) {
                    int ni = i + dir.first;
                    int nj = u + dir.second;

                    if (ni == x && nj == y) {
                        new_dp[ni][nj] += count;
                    }

                    new_dp[ni][nj] += count;
                }
            }
        }

        dp = new_dp;
    }

    // Return the count of ways to reach (x, y) in 'steps' steps
    return dp[x][y];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y, p, q, steps;
        cin >> a >> b >> x >> y >> p >> q >> steps;

        int ways = countWays(a, b, x, y, p, q, steps);
        cout << ways << endl;
    }
    return 0;
}
