#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],s=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    while(a[s]&&a[s]>=a[k-1])
    {
        ++s;
    }

    cout<<s<<endl;


}
