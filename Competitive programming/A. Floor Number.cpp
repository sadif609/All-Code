#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long int a,b,c;
        cin>>a>>b;
        c=( a-3)/b+2;
        if(a<=2)
            cout<<1<<endl;
        else
           cout<<abs(c)<<endl;

    }




}
