
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n,m;
    cin>>n>>m;
    ll s=n*m,k=s/3;
    if(s%3==0)
        cout<<k<<endl;
    else
    {
        ll e=s-k*3;
        if(e==1)
            cout<<k+1<<endl;
        else
            cout<<(e/2)+k<<endl;
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
