
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if(i==1 )
                cout<<j;
            else if (i==n)
                cout<<i;
            else
            {
                if(j==1)
                    cout<<i;
                else if(j==n)
                    cout<<j;
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);

        solve();

}
