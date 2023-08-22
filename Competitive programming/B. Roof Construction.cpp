
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    int n,k=0;
    cin>>n;
    for(int i=1; i<n; i*=2) k=i;
    for(int i=1; i<n; i++)
    {
        if(i==k) cout<<0<<' ';
        cout<<i<<' ';
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
