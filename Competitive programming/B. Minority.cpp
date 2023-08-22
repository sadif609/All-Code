
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
string s;
cin>>s;
ll sz=s.size(),n=0,m=0;
if(sz<3)
    cout<<0<<endl;
else{
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='0')n++;
        else
            m++;
    }
    cout<<(n==m? n-1 : min(n,m))<<endl;
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
