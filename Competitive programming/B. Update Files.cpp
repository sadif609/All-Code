
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n,m,k,c=1,a=0,i;
    cin>>n>>k;

    while(c<k)
    {
        c*=2;
        a++;
    }
    a+=(n-c+k-1)/k;
    cout<<a<<endl;




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
