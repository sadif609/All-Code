

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    int n,k=0,d;
    cin>>n;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>d;
        if(mp[d]>k)
            k=mp[d];
        mp[d]=i;
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
