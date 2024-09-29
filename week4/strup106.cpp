
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n,m;
    ll x,y,save=0;
    cin>>n>>m;

    cin>>x>>y;
    save=m*n-min ({x*m,y*n,(n-x+1)*m,(m-y+1)*n});
    cout<<save<<endl;
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
