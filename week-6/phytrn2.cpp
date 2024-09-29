


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
    cin>>n;
    ll a[n],b[n];
    ll om=0,ad=0,mx=0,mx2=0;
    fr(i,0,n)
    {
        cin>>a[i];

    }

    fr(i,0,n)
    {
        cin>>b[i];

    }
    fr(i,0,n)
    {
        if(a[i]==0)
        {

            mx=max(mx,om);
            om=0;
        }
        else if(a[i]>0)
        {
            om++;
        }
        if(b[i]==0)
        {

            mx2=max(mx2,ad);
            ad=0;

        }
        else if(b[i]>0)
        {
            ad++;
        }

    }
    if(mx>mx2)
        cout<<"Om"<<endl;
    else if(mx2>mx)
        cout<<"Addy"<<endl;
    else
        cout<<"Draw"<<endl;





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
