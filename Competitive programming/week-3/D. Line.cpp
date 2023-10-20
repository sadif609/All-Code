
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    ll c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')a[i]=i;
        else a[i]=n-1-i;
        c+=a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; ++i)
    {
        if(n-1-2*a[i]>0)c+=n-1-2*a[i];
        cout<<c<<" ";
    }
    cout<<endl;

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
