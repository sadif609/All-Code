

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

    int n;
    cin>>n;
    vv<ll> a(n);
    fr(i,0,n)
    {
        cin>>a[i];
    }

    vv<ll> freq(n+2,0);
    fr(i,0,n)
    {
        if(a[i]>n)continue;
        freq[a[i]]++;
    }

    ll ans=0;
    fr(i,1,n+1)
    {
        ll k=0;
        for(ll x=1; x*x<=i; x++)
        {
            if(i%x==0)
            {
                k+=freq[x];
                if(x*x!=i)
                {
                    k+=freq[i/x];
                }
            }
        }
        ans=max(ans,k);
    }

    cout<<ans<<endl;

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
