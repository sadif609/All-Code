

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    ll n,m,k=0;
    cin>>n>>m;
    stack<string>a[n];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        for(int j=0;j<m;j++)
        {
            if(s[j]=='v')
            {
                k=1;
            }
            if(s[j]=='i' && k==1)
            {
                k=2;
            }
            if(s[j]=='k' && k==2)
            {
                k=3;
            }
            if(s[j]=='a' && k==3)
            {
                k=4;
            }

        }


    }
    for()


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
