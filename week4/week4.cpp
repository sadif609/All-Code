
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    ll k=0;
    for(ll i=n-2; i>=0; i--)
    {
        if(a[i]>a[i+1])
        {
            a[i]=a[i+1];
            k++;
        }
    }
    cout<<k<<endl;
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
