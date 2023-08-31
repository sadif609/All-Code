
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll n,m;
    cin>>n>>m;
    string s,a;
    cin>>s;
    a=s;
    reverse(s.begin(),s.end());
    if(s == a || m==0)
    cout<<1<<endl;
    else
        cout<<2<<endl;




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
