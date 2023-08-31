#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n,x,t,m;

    cin>>n>>x>>t;
    m=min(t/x,n);
    cout<<m*(2*n-1-m)/2<<endl;
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
