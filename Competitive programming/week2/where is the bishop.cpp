
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
string s[16];
for(ll i=0;i<8;i++)
    cin>>s[i];
for(ll i=1;i<8;i++)
{
    for(ll j=1;j<8;j++)
    {
        if(s[i][j]=='#' && s[i-1][j-1]=='#' && s[i+1][j-1]=='#')
            cout<<i+1<< " "<<j+1<<endl;
    }
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
