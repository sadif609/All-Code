#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll k=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
        {
            a[i+1]=0;
            k++;
        }
    }

    cout<<k<<endl;


}
