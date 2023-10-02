
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

vector<ll>segT;
void build(ll s, ll e, ll i,vector<ll>&a)
{
    if(s==e)
    {
        segT[i]=a[s];
        return;
    }
    ll mid =s+(e-s)/2;
    build(s,mid,2*i+1,a);
    build(mid+1,e,2*i+2,a);
    segT[i]=segT[2*i+1]&segT[2*i+2];
}
int range(ll s, ll e, ll i, ll qs, ll qe)
{
    if(qs<=s && qe>=e)
        return segT[i];
    if(qs>e || qe < s)
        return INT_MAX;
    ll mid = s+(e-s)/2;
    ll l= range(s,mid,2*i+1,qs,qe);
    ll r = range(mid+1,e,2*i+2,qs,qe);
    return l & r;
}

void solve()
{
   ll n;
   cin>>n;
   vector<ll>a(n);
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];

   }
   int q;
   cin>>q;
   segT.resize(4*n);
   build(0,n-1,0,a);
   while(q--)
   {
       ll st,k;
       cin>>st>>k;
       st--;
       ll h=n-1;
       ll l = st;
       ll ans = -1;
       while (l<=h)
       {
           ll mid = l+(h-l)/2;
           ll scannerPayMe = range(0,n-1,0,st,mid);
           if(scannerPayMe>=k)
           {
               l= mid+1;
               ans=mid;
           }
           else{
            h=mid-1;
           }
           if(ans>=0)
            ans+=1;
           cout<<ans<<" ";
       }
       cout<<endl;
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
