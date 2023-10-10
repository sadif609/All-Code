#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+5;
long long q,l,a[N],b[N],t,n,m,r;
main()
{

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);

    for(int i=2; i<=n; i++)
    {
        a[i]=a[i-1]+a[i];
        b[i]=b[i-1]+b[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>q>>l>>r;
        if(q==1)
            cout<<a[r]-a[l-1]<<endl;
        if(q==2)
         cout<<b[r]-b[l-1]<<endl;
    }

}
