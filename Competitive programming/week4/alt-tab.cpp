
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX



int main()
{
     ll n; cin>>n;
    string ss[n];
    for (ll i=n-1; i>=0; i--)
        cin>>ss[i];

    map<string, ll> m;
    string s = "";
    for (ll i=0; i<n; i++)
    {
        m[ss[i]]++;
        if (m[ss[i]]==1){
            s +=ss[i].substr(ss[i].size()-2, 2);
        }
    }

    cout<<s<<endl;


}
