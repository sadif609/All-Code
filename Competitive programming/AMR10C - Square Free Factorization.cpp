#include<bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;
int main()
{

        long long n,k=0,s=0;
        cin>>n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                k++;

        }
        s= (M_PI *(n)-n/ log(n)) / M_PI *(n);
        cout<<s;



}
