#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(string s)
{
    int m=0,t=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='M')
            m++;
        else
            t++;
        if(m>t)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int M=0,T=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='T')T++;
            else M++;
        }
        if(2*M != T)cout<<"NO"<<endl;
        else
        {
            if(solve(s)==true)
            {
                reverse(s.begin(),s.end());
                if(solve(s)==true)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
