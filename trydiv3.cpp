#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        vector<int> diff(n + 2, 0);  // Difference array to mark job intervals

        // Read jobs and update the difference array
        for (int i = 0; i < k; i++) {
            int l, r;
            cin >> l >> r;
            diff[l]++;  // Job starts
            if (r + 1 <= n) {
                diff[r + 1]--;  // Job ends
            }
        }

        // Compute the prefix sum to get the actual number of jobs on each day
        vector<int> jobs(n + 1, 0);  // jobs[i] holds the number of jobs on day i
        for (int i = 1; i <= n; i++) {
            jobs[i] = jobs[i - 1] + diff[i];
        }

        // Use a sliding window to calculate overlaps for every possible start day
        int max_overlap = 0, min_overlap = k + 1;
        int best_brother = 1, best_mother = 1;

        int current_overlap = 0;
        // Initial window of first d days
        for (int i = 1; i <= d; i++) {
            current_overlap += jobs[i];
        }

        max_overlap = current_overlap;
        min_overlap = current_overlap;

        // Sliding window across the rest of the days
        for (int start = 2; start + d - 1 <= n; start++) {
            current_overlap = current_overlap - jobs[start - 1] + jobs[start + d - 1];

            // Track max overlap for brother
            if (current_overlap > max_overlap) {
                max_overlap = current_overlap;
                best_brother = start;
            }

            // Track min overlap for mother
            if (current_overlap < min_overlap) {
                min_overlap = current_overlap;
                best_mother = start;
            }
        }

        cout << best_brother << " " << best_mother << endl;
    }

    return 0;
}
