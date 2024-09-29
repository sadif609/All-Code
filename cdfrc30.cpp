


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
#define mod 1000000007
const double PI = 3.141592653589793238460;
vv<int>dv;
ll a[100010];

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

int fms(int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        mx = max(mx, element);
    }
    return mx;
}


int processSingleQuery(char operation, int left, int right, int cm)
{
    if (left <= cm && cm <= right)
    {
        if (operation == '-')
        {
            --cm;
        }
        else if (operation == '+')
        {
            ++cm;
        }
    }
    return cm;
}


void printMax(ll value)
{
    cout << value << " ";
}
void out(ll m)
{
    cout<<m<<endl;
}


void solve()
{
    ll n, x,y;
    cin>>n>>x>>y;


    ll gcd_xy = __gcd(x, y);

    fr(i,1,n+1)
    {
        cin>>a[i];
        a[i]%=gcd_xy;
    }


    sort(a + 1, a + 1 + n);


    ll m = a[n] - a[1];
    ll i=0;
    while(n--)
    {
        m = min(m, a[i] + gcd_xy - a[i + 1]);
        i++;
    }


out(m);


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
