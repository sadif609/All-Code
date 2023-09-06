
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    bool k=true;
    for(ll i=1;i<=n-1;i++)
    {
        if(a[i]% __gcd(a[i-1],a[i+1])!=0)
            k= false;
    }
    if(k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


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
