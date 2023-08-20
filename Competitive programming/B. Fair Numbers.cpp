#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x,k;
        cin>>n;
        x=n;
        while(x)
        {
            m=x%10;
            x=x/10;
            if(m && n%m)
            {
                n++;
                x=n;

            }
        }
        cout<<n<<endl;
    }
}
