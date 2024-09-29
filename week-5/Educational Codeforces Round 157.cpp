
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
struct point
{
    ll x,y;
};
void solve()
{
    ll n;
    ll k=0;
    cin>>n;
    vector<ll>v(n*2);
    for(ll i=0; i<n*2; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    vector<point>pn(n);

    ll l=0,r=2*n-1;
    for(ll i=0; i<n; i++)
    {
        pn[i].x=v[l];
        pn[i].y=v[r];
        l++;
        r--;
        if(i>0)
        {
            k+=abs(pn[i].x-pn[i-1].x)+abs(pn[i].y-pn[i-1].y);

        }
    }
    cout<<k<<endl;
    for(ll i=0; i<n; i++)
        cout<<pn[i].x<<" "<<pn[i].y<<endl;


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
