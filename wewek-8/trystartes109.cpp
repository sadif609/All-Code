

// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX



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





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
     ll n;
     cin>>n;
     ll a[n];
     ll m;
     cin>>m;
     a[0]=m;
     for(ll i=1;i<n;i++)
     {
         cin>>a[i];
         m^=a[i];
     }
     ll mn=m,mn2;
     for(ll i=0;i<n;i++)
     {
        mn2=(m^a[i]);
         mn=min(mn,mn2);
     }
     cout<<mn<<endl;



    }
}
