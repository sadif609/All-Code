#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        s[l-1]=s[0];
        cout<<s<<endl;
    }


}
