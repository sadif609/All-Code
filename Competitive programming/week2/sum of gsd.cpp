
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n;
    cin>>n;
    ll k=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            for(ll y=1;y<=n;y++)
            {
                k+=__gcd(__gcd(i,j),y);
            }
        }
    }
    cout<<k<<endl;
}
