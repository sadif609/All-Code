

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<pair<char,int>> v;
    char mx = max(s[n-1],s[0]);
    char mn = min(s[n-1],s[0]);
    for(int i=1; i<n-1; i++)
    {
        if(s[i]<=mx && s[i]>=mn)
        {
            v.push_back({s[i],i+1});
        }
    }
    sort(v.begin(),v.end());
    if(s[0]>s[n-1])
    {
        reverse(v.begin(),v.end());
    }
    cout<<mx-mn<<" "<<v.size()+2<<"\n";
    cout<<1<<" ";
    for(auto x:v)
    {
        cout<<x.second<<" ";
    }
    cout<<n<<"\n";



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
