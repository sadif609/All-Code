

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll a,b;
    cin>>a>>b;
    ll s=0;
    while(a>0)
    {
        s++;
        a/=b;

    }
    cout<<s;
}
