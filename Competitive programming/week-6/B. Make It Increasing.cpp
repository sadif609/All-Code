

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n;
    cin>>n;
    ll a[n],b[n];
    ll k=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=n-2; i>=0; i--)
    {
        if(a[i+1]==0)
        {
            k=-1;
            break;
        }

        while(a[i]>=a[i+1])
            a[i]/=2,k++;
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
