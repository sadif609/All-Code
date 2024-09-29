
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(c>b)
        b=c+c-b;
    cout<<(a==b?3:a<b?1:2)<<endl;

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
