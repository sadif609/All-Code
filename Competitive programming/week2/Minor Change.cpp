
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
  string a,c,b;
  cin>>a>>b;
  ll k=0;
  for(ll i=0;i<a.size();i++)
  {
     if(a[i]!=b[i])
        k++;
  }
  cout<<k;
}
