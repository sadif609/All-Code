#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1],b=0,c=0,d=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
            b++;
        else
            c++;
    }
    for(int i=1; i<=b+c; i++)
    {
        if(i<=b)
        {
            cout<<i<<" ";
            d=i-1;
        }

        else
        {
            cout<<d<<" ";
            d--;


        }
    }
    cout<<endl;
    d=1;
    for(int i=1; i<=b+c; i++)
    {
        if(i<=c*2)
        {
           cout<<1<<" "<<0<<" ";
           i++;

        }
        else
        {
            cout<<d<<" ";
            d++;
        }
    }
    cout<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
