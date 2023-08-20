#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char m='z',f=s[0];
    for(int i=1; i<n; i++)
    {
        m=min(s[i],m);
        if(f==m)
        {
            if(i<n-1)
            {
                s[1]=m;
                s[i+1]=s[i];
            }

        }
        else
        {
            s[i]=f;
            s[0]=m;
        }

    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
