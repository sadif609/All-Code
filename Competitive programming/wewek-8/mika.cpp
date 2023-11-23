
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
    ll mn = 0;
    ll k=0;
    vv<ll>a(n+1);

    fr(i,1,n+1)
    cin >> a[i];



    for (ll i = n - 1; i >= 1; i--)
    {
        if (a[i] <= a[i + 1])
            continue;

        k=(a[i]-1)/a[i+1];


        mn+=k;

        k++;

        a[i]=a[i]/k;
    }

    cout << mn;
    cout<<endl;

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

