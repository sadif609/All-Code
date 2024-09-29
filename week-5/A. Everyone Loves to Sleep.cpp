
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n,h,m;

    cin>>n>>h>>m;
    ll tm=h*60+m;
    ll mn=N;
    while(n--)
    {
        cin>>h>>m;
        ll p=h*60+m;
        if(p<tm)p+=(24*60);
        mn=min(mn,p-tm);
    }
    cout<<mn/60<<" "<<mn%60<<endl;
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
