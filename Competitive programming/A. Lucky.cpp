
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
      int l=s.size(),a,s1=0,s2=0;
      for(int i=0,j=3;i<3,j<6;i++,j++)
      {
          s1=s1+s[i]-48;
          s2=s2+s[j]-48;

      }
     if(s1==s2)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

    }




}
