
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    string s;
    cin>>s;
    string g="";
    for(int i=0; i<50; i++)
    {
        g=g+"Yes";
    }
    if(g.find(s)!=-1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

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
