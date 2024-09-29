
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){

ll a,b,c,x,y;
cin>>a>>b>>c>>x>>y;
ll m=0,n=0;
if(x>a)
{
     n=x-a;

}

if(y>b)
{
     m=y-b;

}


if((x<=a && y<=b) || n+m<=c )
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
