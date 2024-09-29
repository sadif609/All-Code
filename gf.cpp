#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;
using std::set;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> th(m);
        for (int j = 0; j < m; ++j) {
            int r;
            char c;
            cin >> r >> c;
            th[j] = std::make_pair(r, c);
        }

        set<int> p_p;
        p_p.insert(x);

        for (int j = 0; j < m; ++j) {
            set<int> n_p_p;
            for (int pl : p_p) {
                int np;
                if (th[j].second == '0') {  // Clockwise throw
                    np = (pl + th[j].first - 1) % n + 1;
                } else if (th[j].second == '1') {  // Counterclockwise throw
                    np = (pl - th[j].first - 1 + n) % n + 1;
                } else {  // '?' direction, player could move either way
                    int npcw = (pl + th[j].first - 1) % n + 1;
                    int npccw = (pl - th[j].first - 1 + n) % n + 1;
                    n_p_p.insert(npcw);
                    n_p_p.insert(npccw);
                    continue;
                }
                n_p_p.insert(np);
            }
            p_p = n_p_p;
        }

        cout << p_p.size() << endl;
        for (int pl : p_p) {
            cout << pl << " ";
        }
        cout << endl;
    }

    return 0;
}
