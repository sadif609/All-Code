
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int n,a[20],f=0;
void dfs(int x,int ans)
{
    if(f)return;
    if(n==x)
    {
        if(ans%360==0)f=1;
        return ;
    }
    dfs(x+1,ans+a[x]);
    dfs(x+1,ans-a[x]);
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    dfs(0,0);
    if(f)cout<<"YES";
    else cout<<"NO";
    return 0;
}
