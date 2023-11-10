

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    int n;
    cin>>n;
    int x=(n+2)/3;
    int y=(n+2)/3+1;
    int z=n-2*((n+2)/3)-1;
    if(z==0)
    {
        x--;
        z++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
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
