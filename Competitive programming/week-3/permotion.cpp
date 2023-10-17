

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    int n;
    cin>>n;
    int a[n+3][n+3];
    for(int i=1; i<=n; i++)
        for(int j=1; j<n; j++)
            cin>>a[i][j];

    int s=a[1][1];
    if(s!=a[2][1])s=a[3][1];
    cout<<s<<" ";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<n; j++)
            if(a[i][1]!=s)cout<<a[i][j]<<" ";
    }
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
