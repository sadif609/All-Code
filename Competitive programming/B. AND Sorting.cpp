
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n;
    cin>>n;
    ll ar[n+1];
    for(ll i=0;i<n;i++)
    {

        cin>>ar[i];
    }
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]!=i)
            v.push_back(i);

    }
    ll k=v[0];
    for(ll i=0;i<v.size();i++)
    {
        k=(k&v[i]);
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
