


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



void solve()
{
    int n, m, x,y,z;

    cin >> n >> m >> x;

    vv<pair<int, char>> th(m);


    int r;
    char c;
    fr(j,0,m)
    {

        cin >> r >> c;
        th[j] = make_pair(r, c);
    }

 set<int> p_p;
    p_p.insert(x);

    fr(j,0,m)
    {
        set<int> n_p_p;

        for (int pl : p_p)
        {
            int np;
            char g='0',o='1';
            if (th[j].second == g)    // Clockwise throw
            {
                np = (pl + th[j].first - 1) % n + 1;
            }
            else if (th[j].second == 0)
            {
                np = (pl - th[j].first - 1 + n) % n + 1;
            }
            else
            {
                ll npcw = (pl + th[j].first - 1) % n + 1;
                int npccw = (pl - th[j].first - 1 + n) % n + 1;
                n_p_p.insert(npcw);
                n_p_p.insert(npccw);
                continue;
            }
            n_p_p.insert(np);
        }
        p_p = n_p_p;
    }

    int ans= p_p.size();
    if(ans==0)
        cout<<0;
    else
    {
        cout << ans << endl;
        for (int pl : p_p)
        {
            cout << pl << " ";
        }
        cout<<endl;
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
