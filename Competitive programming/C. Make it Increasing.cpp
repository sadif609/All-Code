
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
int a[10003],b[10003];
void solve()
{
    ll n;
    cin>>n;
    ll ans=1e18;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
       ll p=0,sum=0;
       for(int j=i-1;j>=1;j--)
       {
           p=p+a[j] - p%a[j];
           sum= sum+ p/a[j];
       }
       p=0;
       for(int j=i+1;j<=n;j++)
       {
           p=p+a[j] - p%a[j];
           sum = sum+ p/a[j];
       }
        ans=min(ans,sum);
    }
    cout<<ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);

        solve();
}
