
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll s=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    ll sm=s%n;
    if(s<n || (k==0 && sm))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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
