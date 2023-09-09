
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define vi vector<int>
void solve()
{

  int n;
  cin>>n;
  vi d(n);
  vi s(n);
  for(int i=0;i<n;i++)
    cin>>d[i]>>s[i];
  int ans=INT_MAX;
  for(int i=0;i<n;i++)
  {
      int x=(s[i]-1)/2;
      ans=min(ans,x+d[i]);
  }
  cout<<ans<<endl;



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
