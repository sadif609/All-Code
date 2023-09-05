
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n;
    cin>>n;
    ll e=0,d=0,m=1e9+7,k;
    for(ll i =0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x%2!=0)d++;
        else{
            e++;
            k=0;
            while(x%2==0)
            {
                x=x/2;
                k++;
            }
            m=min(k,m);
        }
    }
    if(d)
        cout<<e<<endl;
    else
        cout<<m+e-1<<endl;


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
