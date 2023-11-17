

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
#define     nl                              printf("\n")
#define INF 1000000000
#define mod 1000000007
const double PI = 3.141592653589793238460;



void solve()
{
    ll n;
    cin >> n;
    ll k = 0;
    vv<ll> v(n + 1, 0);
    vv<ll> v2;
    fr(i,1,n+1)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    for (ll i = 1; i * i <= n; i++)
    {
        if(n%i)
        {
            continue;
        }
        else
        {
            v2.push_back(i);
            if (i != n / i)
            {
                v2.push_back(n / i);
            }
        }
    }

    for (ll x : v2)
    {
        ll mn = LLONG_MAX, mx = 0;
        for (ll i = x; i <= n; i += x)
        {
            mx = max(mx, v[i] - v[i - x]);
            mn = min(mn, v[i] - v[i - x]);


        }
        k = max(k, mx - mn);
    }
    cout << k << endl;
}


signed int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
}
