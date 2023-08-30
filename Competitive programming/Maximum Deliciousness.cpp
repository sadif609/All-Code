
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
ll a,b,c,k=0;
cin>>a>>b>>c;
ll ar[a];
for(ll i=0;i<a;i++)
    cin>>ar[i];
sort(ar,ar+a,greater<ll>());
for(ll i=c-1;i<a;i=i+b)
{
    k+=ar[i];

}
cout<<k<<endl;


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
