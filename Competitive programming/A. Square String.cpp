#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int t,l,j,k,m;
    cin>>t;
    while(t--)
    {
        string s,a,b;
        cin>>s;
         l=s.size();
        if(l%2==0)
           {
               k=0;
               for(int i=0,j=l/2;i<l/2,j<l;i++,j++)
               {
                   if(s[i]==s[j])
                   {
                       k++;
                   }

               }
               if(l/2==k)
                cout<<"YES"<<endl;
               else
                cout<<"NO"<<endl;

           }
        else
            cout<<"NO"<<endl;

    }




}
