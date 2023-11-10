
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n;
    cin>>n;
    ll k=0,mx=0;
    ll a[n+2],b[n+2];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        mx=max(mx,a[i]-b[i]);
    }
    for(ll i=0; i<n; i++)
    {
        if(a[i]-mx < b[i]  && b[i]!=0)
            k++;
    }
    if(k)
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
