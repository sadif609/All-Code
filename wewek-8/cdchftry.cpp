


// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

#define mod 1000000007
const double PI = 3.141592653589793238460;


bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        ll ans=0,j=1;
        int n;
        cin>>n;

        while (n>0)
        {
            if (prime(n))
            {
                n=0;
                ans++;

                break;
            }
            else
            {
                n -= j;
                j *= 2;
                ans ++;
            }
        }
        cout<<(n==0 ? ans : -1)<<endl;

    }
}
