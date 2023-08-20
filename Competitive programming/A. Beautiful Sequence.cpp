#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n+1],c=0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(i>=a[i]-1)
                c++;
        }
        cout<<(c? "YES" : "NO")<<endl;
    }
}
