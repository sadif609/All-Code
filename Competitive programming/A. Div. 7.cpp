
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n;
    cin>>n;
    if(n%7==0)
        cout<<n<<endl;
    else{
        ll m=10*(n/10);
        for(ll i=m;i<=m+9;i++)
        {
            if(i%7==0)
            {
                n=i;
                break;
            }
        }
        cout<<n<<endl;


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
