
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n,h,k=0,j=0,y=0;
    cin>>n>>h;
    ll a[n];
    ll b[100009];
    for(auto &i:a)
        cin>>i;
    int x;
    while(cin>>x)
    {
        b[y]=x;
        y++;
        if(x==0)
            break;

    }
    for(ll i=0; i<y; i++)
    {
        if(b[i]==0)
        {
            break;
        }
        else if(b[i]==1)
        {
            if(j!=0)
                j--;
                continue;
        }

        else if(b[i]==2)
        {
            if(j!=n-1)
                j++;
            continue;

        }
        else if(b[i]==3)
        {
            if(k==0 && a[j])
            {
                a[j]=a[j]-1;
                k=1;
            }
            continue;

        }
        else
        {
            if(k && a[j]<h)
            {
                k=0;
                a[j]=a[j]+1;
            }

        }
    }
     for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
