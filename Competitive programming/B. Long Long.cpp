

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

    ll n,r=0,l=0,k=0,c=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0 )
        {
            r=1;

        }
        else if (a[i]>0)
        {
            l+=r;
            r=0;
        }
        k+=abs(a[i]);
    }
    l+=r;
    cout<<k<<" "<<l<<endl;


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
