#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;

       ll x,y,k=0;
       cin>>x>>y;
       k=m*n-min ({x*m,y*n,(n-x+1)*m,(m-y+1)*n});
       cout<<k<<endl;

    }
}
