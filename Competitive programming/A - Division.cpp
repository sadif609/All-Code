
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll k=0;
    for(ll i=0; i<n; i=i+2)
    {
        if(a[i]%2==a[0]%2)
            continue;
        k++;
    }
    for(ll i=1; i<n; i=i+2)
    {
       if(a[i]%2==a[1]%2)
            continue;
        k++;
    }
    cout<<(k ?"NO":"YES")<<endl;






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
