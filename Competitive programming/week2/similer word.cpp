
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int ans=N;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int a=0;
            for(int x=0; x<m; x++)
            {
                a+=abs(s[i][x]-s[j][x]);
            }
            ans=min(ans,a);
        }
    }
    cout<<ans<<endl;
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
