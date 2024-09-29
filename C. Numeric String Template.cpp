#include<bits/stdc++.h>
using namespace std;

#define vv vector
#define ss string
#define ll long long
#define mp map

mp<char, int> CF(const ss& s) {
    mp<char, int> f;
    for (char c : s) {
        f[c]++;
    }
    return f;
}

vv<pair<int, char>> CFB(const mp<char, int>& f) {
    vv<pair<int, char>> fv;
    for (auto& it : f) {
        fv.push_back({it.second, it.first});
    }
    return fv;
}


ss FS(const vv<pair<int, char>>& fv, ll n) {
    ss ans(n, ' ');
    ll k = 0;

    for (auto& i : fv) {
        ll freq = i.first;
        char ch = i.second;
        while (freq > 0) {
            ans[k] = ch;
            k += 2;
            if (k >= n) {
                k = 1;
            }
            freq--;
        }
    }

    return ans;
}


ss RS(const ss& s) {
    map<char, int> f = CF(s);
    vv<pair<int, char>> fv = CFB(f);
    sort(fv.rbegin(), fv.rend());
    return FS(fv, s.size());
}

void solve() {
    int n;
    cin >> n;
    ss s;
    cin >> s;
    ss result = RS(s);
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
