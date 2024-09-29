#include <iostream>
#include <algorithm>

using namespace std;

bool canBeSorted(int arr[], int n) {
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i + 1] < arr[i]) {
            if (arr[i] < 10) return false;
            int left = arr[i] / 10;
            int rem = arr[i] % 10;
            if (arr[i + 1] >= rem && left <= rem) {
                // Update arr[i] with left-most digit
                arr[i] = left;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        cout << (canBeSorted(arr, n) ? "YES" : "NO") << endl;
    }
    return 0;
}
