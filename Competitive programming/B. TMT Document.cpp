

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


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
        string a,b,r;
        cin>>a;
        if(a[0]=='M')
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll t=0,m=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]=='T')
                t++;
            else
                m++;
        }
        if(t/2==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
