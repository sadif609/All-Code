
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll i,j,h,d,H,D,a,k,w,x,y,z,p;
    cin>>h>>d>>H>>D>>k>>w>>a;
    for(i=0; i<=k; i++)
    {
        x=h+i*a;
        y=d+(k-i)*w;
        z=x/D;
        if(x%D>0)z++;
        p=H/y;
        if(H%y>0)p++;
        if(z>=p)break;
    }
    if(i>k)cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";

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
