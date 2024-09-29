
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
int t,n,s[200005],f[200005];
void solve()
{

    cin>>n;
    for(int i=1; i<=n; i++) cin>>s[i];
    for(int i=1; i<=n; i++) cin>>f[i];
    for(int i=1; i<=n; i++) cout<<f[i]-max(s[i],f[i-1])<<" ";
    cout<<endl;
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
