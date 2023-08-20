
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long long a[n],i,m=0,k=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            if(a[i]>m)
            {
                m=a[i];
                k++;
            }

        }

        if(k==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

}

