

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


// ekta sstring dewa ache" aaab " ekhane jodi b delete dewa hoi tahole aaa ekta pldrm but "abcde" eta k banano psbl na
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll f=0;
    if(n%3==1)
        cout<<"YES"<<endl;
    else
    {
        fr(i,0,26)
        {
            ll k=n,l=-1;
            for(ll j=0; j<n; j+=3)
            {
                if(s[j]==(i+'a'))
                {
                    k=j;
                    break;
                }
            }
            for(int j=n-1; j>=0; j-=3)
            {
                if(s[j]==(i+'a'))
                {
                    l=j;
                    break;
                }
            }
            if(k<l) f=1;
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


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
