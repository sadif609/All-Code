

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

ll n,k=0,s=0;
cin>>n;
while(n!=1)
{
    s+=n;
    n=n/2;
}
cout<<s+1<<endl;

}
k
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
}
