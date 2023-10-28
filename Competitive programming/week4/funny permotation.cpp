

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    if(n==3)
        cout<<-1;
    else
    {
        for(int i=3; i<=n; i++)
            cout<<i<<" ";
        cout<<"2 1";
    }
    cout<<endl;
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
