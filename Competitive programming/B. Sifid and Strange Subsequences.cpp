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
    sort(ar,ar+n);
    ll a,b,m=n-1;
    for(ll i= 0;i<m;i++){
        if(ar[i+1]-ar[i] < ar[m])
            m--,i--;
    }
    cout<<m+1<<endl;



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
