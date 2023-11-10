
#include<bits/stdc++.h>
# define setbits(x) __builtin_popcountll(x)
# define mod 1000000007
#define ll long long
#define N  INT_MAX
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    map<int, int> fr;
    for(int i=0; i<n; i++)
    {
        fr[a[i]]++;
    }
    int rpt = 0;
    for(auto x: fr)
    {
        if(x.second > 1) rpt++;
    }
    if(rpt <= 1)
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<int> v;
        for(auto x: fr)
        {
            if(x.second > 1)
            {
                v.push_back(x.first);
                if(v.size()==2) break;
            }
        }

        int first = v[0], sec = v[1];
        map<int, int> mp;
        mp[first] = 1;
        mp[sec] = 2;
        for(int i=0; i<n; i++)
        {
            if(a[i]==first)
            {
                cout<<mp[first]<<" ";
                mp[first] = 3 - mp[first];
            }
            else if(a[i]==sec)
            {
                cout<<mp[sec]<<" ";
                mp[sec] = 5 - mp[sec];
            }
            else
            {
                cout<<1<<" ";
            }
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
