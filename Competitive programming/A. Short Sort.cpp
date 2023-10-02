#include<bits/stdc++.h>
#define ll long long
#define N INT_MAX

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll l=1,r=N,ans=N;
        while(l<=r)
        {
            ll mid =(r-l)/2+l;
            ll res =0;
            for(ll &i:a)
            {
                if(mid>i)
                {
                    res+=(mid-i);
                }
            }
            if(res<=m)
            {
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }
        cout<<ans<<endl;


    }

    return 0;
}
