#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    int n,k;
    cin>>n>>k;

    if(k==1 || n%2==0)
    {
        cout<<"YES"<<"\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
                cout<<(i+1+j*n)<<" ";
            cout<<"\n";
        }
    }
    else
        cout<<"NO"<<"\n";

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
        solve();
    }
}

