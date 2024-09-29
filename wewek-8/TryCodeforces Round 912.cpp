

// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

#define MOD 1000000007
const double PI = 3.141592653589793238460;


bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {

        int n, q;
        cin >> n >> q;
        vector<int> p(n);
        vector<int> a(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            a[i + 1] = p[i];
        }

        for (int i = 0; i < q; ++i) {
            int k;
            cin >> k;
            int ans = 0;
            vector<int> c = a;

            for (int j = 60; j >= 0; --j) {
                int u = 0;
                vector<int> b = c;

                for (int idx = 1; idx <= n; ++idx) {
                    if (!((c[idx] >> j) & 1)) {
                        int prev = c[idx];
                        c[idx] += (1 << j);
                        c[idx] /= (1 << j);
                        c[idx] *= (1 << j);
                        u += (c[idx] - prev);
                        if (u > k) {
                            break;
                        }
                    }
                }

                if (u <= k) {
                    k -= u;
                    ans += (1 << j);
                } else {
                    c = b;
                }
            }

            cout << ans << endl;
        }
    }
}
