


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
   ll n,a,b,c,d;
   cin>>n;

    while(++n)
    {

        a=n/1000;
        b=n/100%10;
        c=n/10%10;
        d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;

    }
   cout<<n<<endl;
}
