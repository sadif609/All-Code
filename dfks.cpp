
// Ashiqul Islam sadif

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define     vv   vector
#define     vi   vector<int>
#define     vb   vector<bool>
#define     vs    vector<string>
#define     vl    vector<ll>
#define     si   set<int>
#define     sl   set<ll>
#define     ull   unsigned long long int
#define     ui    unsigned int
#define     pp    pair
#define     pb    push_back
// full array
#define fr(i, s, n) for (ll i = s; i < n; i++)
#define     all(x)  x.begin(),x.end()
#define     all_0(x)    memset(x,0,sizeof(x))
#define     all_neg(x)  memset(x,-1,sizeof(x))
#define     all_1(x)   memset(x,1,sizeof(x))
// print option
#define     YES                             printf("YES\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")


void read_intv(int intv, map<int, int>& s_map, map<int, int>& e_map) {
    int l, r;
    while (intv--) {
        cin >> l >> r;
        s_map[l]++;
        e_map[r]++;
    }
}

int init_count(int lim, const map<int, int>& s_map) {
    int curr = 0;
    fr(i,1,lim+1)
    {
        curr += s_map.count(i) ? s_map.at(i) : 0;
    }
    return curr;
}

void update_cnt(int& curr, int i, int lim, const map<int, int>& s_map, const map<int, int>& e_map) {
    if (s_map.count(i + lim - 1)) {
        curr += s_map.at(i + lim - 1);
    }
    if (e_map.count(i - 1)) {
        curr -= e_map.at(i - 1);
    }
}

void proc_intv(int len, int lim, int intv) {
    map<int, int> s_map, e_map;
    read_intv(intv, s_map, e_map);

    int curr = init_count(lim, s_map);
    int max_cnt = curr, min_cnt = curr, max_idx = 1, min_idx = 1;

    for (int i = 2; i <= len - lim + 1; ++i) {
        update_cnt(curr, i, lim, s_map, e_map);

        if (curr > max_cnt) {
            max_cnt = curr;
            max_idx = i;
        }
        if (curr < min_cnt) {
            min_cnt = curr;
            min_idx = i;
        }
    }

    cout << max_idx << " " << min_idx << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        proc_intv(n, d, k);
    }
}
