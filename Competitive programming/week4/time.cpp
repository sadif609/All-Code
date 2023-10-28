#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string b;
        cin>>b;
        string s;
    cin>>s;
    while(true)
    {
        int n=0;
        for(int i=0; i<s.size(); i++)
        {
            n*=10;
            n+=(s[i]-48);
            n%=8;
        }
        if(n==0)
        {
            cout<<s;
            return 0;
        }
        next_permutation(s.begin(),s.end());
    }
    }

}
