
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX

int main ()
{
    int n,k=0;
    string s,a,b;
    cin>>n>>s;
    map<string,int>mp;
    for(int i=0;i<s.size();i++)
    {
        a=s.substr(i,2);
        mp[a]++;
        if(k<mp[a])
        {
            k=mp[a];
            b=a;
        }
    }
    cout<<b;
     for(i=2;i<n;i++){
        if(a[i]==0&&a[i-1]&&a[i+1])k++,i+=2;
    }
    cout<<k;


}
