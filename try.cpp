#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;


    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<pair<int, char>> freqVec;
    for (auto& it : freq) {
        freqVec.push_back({it.second, it.first});
    }
    sort(freqVec.rbegin(), freqVec.rend());



    string result(n, ' ');
    int idx = 0;
    for (auto& p : freqVec) {
        while (p.first > 0) {
            result[idx] = p.second;
            idx += 2;
            if (idx >= n) {
                idx = 1;
            }
            p.first--;
        }
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
