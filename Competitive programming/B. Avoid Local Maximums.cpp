
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
int a[200009];
void solve()
{
    int n,ans=0;
    cin>>n;

    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=2; i<=n-1; i++)
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            a[i+1]=max(a[i],a[i+2]);
            ans++;
        }

    cout<<ans<<endl;
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
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
