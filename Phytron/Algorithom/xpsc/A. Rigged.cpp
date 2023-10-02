#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;;
ll a[N],rep[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case-- > 0)
    {
        int n;
        cin>>n;
        for(int i=0; i<=n+2; i++)
        {
            rep[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            rep[i]=rep[i+1]+(a[i]>=0 ? a[i] : 0)   ;
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,rep[i+1] + (i%2==0?a[i]:0));
        }
        cout<<ans<<endl;

    }
}

