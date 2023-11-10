# include <bits/stdc++.h>
using namespace std;

# define int long long
# define setbits(x) __builtin_popcountll(x)
# define mod 1000000007

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    map<int, int> fr;
    for(int i=0; i<n; i++) {
        fr[a[i]]++;
    }
    int repeating = 0;
    for(auto x: fr) {
        if(x.second > 1) repeating++;
    }
    if(repeating <= 1) {
        cout<<-1<<endl;
    }
    else {
        vector<int> sel;
        for(auto x: fr) {
            if(x.second > 1) {
                sel.push_back(x.first);
                if(sel.size()==2) break;
            }
        }

        int first = sel[0], sec = sel[1];
        map<int, int> val;
        val[first] = 1;
        val[sec] = 2;
        for(int i=0; i<n; i++) {
            if(a[i]==first) {
                cout<<val[first]<<" ";
                val[first] = 3 - val[first];
            }
            else if(a[i]==sec) {
                cout<<val[sec]<<" ";
                val[sec] = 5 - val[sec];
            }
            else {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
