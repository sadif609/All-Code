
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n;
    cin>>n;
    ll a[n+3];
    ll s=0;
    for(ll i=0; i<n-1; i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            s=i+1;
            break;
        }
    }
    cout<<s<<endl;


}
