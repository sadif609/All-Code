#include <iostream>
#include <vector>

long long computeResult(const std::vector<int>& occurrences) {
    long long result = 0;
    long long previous = 0;

    for (int count : occurrences) {
        if (count >= 3) {
            result += (count * (count - 1) * (count - 2)) / 6;
        }
        if (count >= 2) {
            result += (count * (count - 1)) / 2 * previous;
        }
        previous += count;
    }

    return result;
}

int main() {
    long long num;
    std::cin >> num;

    std::vector<int> occurrences(num + 1, 0);

    for (long long i = 0; i < num; i++) {
        long long x;
        std::cin >> x;
        occurrences[x]++;
    }

    long long result = computeResult(occurrences);

    std::cout << result << std::endl;

    return 0;
}
