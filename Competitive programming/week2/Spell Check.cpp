#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
sort(s.begin(),s.end());
if(s=="Timru")
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

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

