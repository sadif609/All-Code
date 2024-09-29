#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long sumOfGCDs(std::vector<int>& arr) {
    int n = arr.size();
    long long sum = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int a = arr[i], b = arr[j], c = arr[k];
                std::vector<int> temp = {a, b, c};
                std::sort(temp.begin(), temp.end());
                sum += gcd(temp[0], temp[1]);
            }
        }
    }

    return sum;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        long long result = sumOfGCDs(arr);
        std::cout << result << std::endl;
    }

    return 0;
}
