
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long N=1e6+5;
pair<ll,ll>a[N];
void solve(){
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;

    }
    sort(a,a+n);
    for(ll i=1;i<n;i++)
    {
        if(a[i-1].second+1 != a[i].second)
            m--;
    }
    cout<<(m>0?"YES" : "NO")<<endl;



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
