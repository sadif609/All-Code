


// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

#define mod 1000000007
const double PI = 3.141592653589793238460;


bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
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
        ll n;
        cin>>n;
        ll ans=0;


        for(ll i=0; i<n; i++)
        {
            ll k;
            cin>>k;
            ans= (ans^k);
        }
        if(n&1)
            cout<<ans<<endl;
        else
        {
            if(ans==0)
                cout<<0<<endl;
            else
            cout<<-1<<endl;
        }



    }
}
