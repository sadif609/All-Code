#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(n%2==0)
        cout<<"YES"<<endl;
    else{
            bool k=false;
        for(ll i=1;i<n;i++)
        {
           if(a[i]<=a[i-1])
           {
               k=true;
                break;
           }

        }
    cout<<(k?"YES":"NO")<<endl;
    }


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

