#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    int n;

    cin>>n;

    string s[(3*n)+1];
    map<string,int>m;
    for(int i=0; i<n*3; i++)
    {
        cin>>s[i];
        m[s[i]]++;
    }
    int k=0;
    for(int i=0; i<n*3; i++)
    {
        if(m[s[i]]==1)k+=3;
        else if(m[s[i]]==2)k+=1;
        if((i+1)%n==0)
        {
            cout<<k<<" ";
            k=0;
            continue;
        }
    }
    cout<<endl;

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
