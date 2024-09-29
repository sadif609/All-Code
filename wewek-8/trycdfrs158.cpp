

// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

#define mod 1000000007
const double PI = 3.141592653589793238460;


bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}


int bfs(vector<int>&a)
{
    ll mx=0,mn=0;
    for(ll i=1;i<a.size();i++)
    {
        if(a[i]>mn)
        {
            mx+=a[i]-mn;
            mn=a[i];
        }
        else
            mn=a[i];
    }
    return mx-1;

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

        int n;
        cin>>n;
        ll k=0;
        vector<ll>v;
        vector<ll> a(n+1);
        for(int i=1; i<=n; i++)
            cin>>a[i];
            v.push_back(a);





    }
}
