#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,a;
    map<string,string>mp;
    for(int i=0; i<n; i++)
    {
        cin>>s>>a;
        if(a=="child")
            a="woman";
        mp[a]+=s+'\n';
    }
    cout<<mp["rat"]<<mp["woman"]<<mp["man"]<<mp["captain"];
}
