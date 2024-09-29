

// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX









int main()
{

   string s,s2;
   cin>>s;
   vector<string>v;
   int l=0,r=0,k=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='R')
        r++;
       else
        l++;
        s2.push_back(s[i]);
        if(r==l)
        {
            v.push_back(s2);
            k++;
            l=0,r=0;
            s2="";
        }

   }
   cout<<k<<endl;
   for(auto x: v)
    cout<<x<<endl;
}

