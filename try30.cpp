Problem C
#include<bits/stdc++.h>

using namespace std;

int arr[100010];

void compute() {
    int num_elements, x, y;
    cin >> num_elements >> x >> y;

    int gcd_xy = __gcd(x, y);

    for(int i = 1; i <= num_elements; i++) {
        cin >> arr[i];
        arr[i] %= gcd_xy;
    }

    sort(arr + 1, arr + 1 + num_elements);

    int min_range = arr[num_elements] - arr[1];

    for(int i = 1; i < num_elements; i++) {
        min_range = min(min_range, arr[i] + gcd_xy - arr[i + 1]);
    }

    cout << min_range << '\n';
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        compute();
    }
}
