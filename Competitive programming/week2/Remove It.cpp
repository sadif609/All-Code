
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
   ll n,m;
   cin>>n>>m;
   ll k=0;
   for(ll i=0;i<n;i++)
   {
       ll x;
       cin>>x;
       if(m!=x){
        cout<<x<<" ";
        k++;
       }

   }
   if(!k)
    cout<<endl;
}
