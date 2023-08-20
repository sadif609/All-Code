#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    int n,k=1;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n*2;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(k<mp[x])
            k=mp[x];

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

