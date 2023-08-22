
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll l,r,k,m=0;
    cin>>l>>r>>k;
    m=(r-l+1)/2;
    if(k)
    {
        if(l%2 && r%2)
            m++;
        cout<<(m<=k ? "YES" : "NO")<<endl;
    }
    else
    {
        if(l!=1 && l==r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
