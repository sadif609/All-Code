


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
#define     nl                              cout<<"\n"
#define INF 1000000000
#define MOD 1000000007
const double PI = 3.141592653589793238460;
vv<int>dv;
ll ans=0;

void div(int n)
{

    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            dv.push_back(i);
        }
        if(n%i!=i)
        {
            dv.push_back(n/i);
        }
    }
}
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
ll pr(ll a, ll b, ll m) {
    a %= m;
    if (a == 1 || b == 0)
        return 1;
   ll res = pr(a, b / 2, m);
    res %= m;
    return (b & 1 == 1) ? ((res * res) % m * a) % m : (res * res) % m;
}
void pr()
{
    cout<<ans<<endl;
}


void solve()
{

  ll n, k;
        cin >> n >> k;

ll mx = 0;
   ll cr_sm = 0;
        ll max_pa = 0;
        int a[n];
        fr(i,0,n)
        {
            cin >> a[i];
            mx += a[i];
            if (mx < 0)
                mx += MOD;
        }



        fr(i,0,n) {
            cr_sm += a[i];
            if (cr_sm < 0)
                cr_sm = 0;
            max_pa = max(max_pa, cr_sm);
        }

         ans = (max_pa > 0) ? (((max_pa % MOD) * ((pr(2, k, MOD) - 1 + MOD) % MOD) + mx) % MOD) : (mx < 0 ? mx + MOD : mx);
        pr();


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
        solve();
    }
}
