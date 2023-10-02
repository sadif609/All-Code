
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){

ll n;
cin>>n;
ll a[n],b[n];
ll mx1=-1,mx2=-1;
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=a[i];


}
sort(a,a+n);
mx1=a[n-1],mx2=a[n-2];
ll k=0,j=0;
for(ll i=0;i<n;i++)
{
    if(b[i]==mx1)
        k=i;
    if(b[i]==mx2)
        j=i;
}
if(k>j)
    swap(k,j);
cout<<k<<" "<<j<<endl;




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
