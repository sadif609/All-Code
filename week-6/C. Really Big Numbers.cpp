

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

int BigN(ll n)
{
    int ans = 0;
    while(n)
        ans += n % 10, n /= 10;
    return ans;
}
void solve()
{

    ll n,s;
    cin>>n>>s;
    ll ans = 0;
    ll l = 1, h = n;
    while(l <= h)
    {
        ll mid = (l + h) / 2;
        if(mid - BigN(mid) >= s)
            ans = max(ans, n - mid + 1), h = mid - 1;

        else
            l = mid + 1;
    }
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
//    int test_case;
//    cin>>test_case;
//    while(test_case--)
//    {
    solve();
//    }
}