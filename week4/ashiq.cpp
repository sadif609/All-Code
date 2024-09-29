

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
        string a,b;
        a.clear();
        b.clear();
        for(int i=0;i<6;i++)
        {
            if(i>2)
                b.push_back(s[i]);
                else
            a.push_back(s[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(a.begin(),a.end());
         reverse(b.begin(),b.end());
        int x,y;
       stringstream ss(a);
        stringstream ss2(b);
       ss>>x;
       ss2>>y;

        if(x>y)
            cout<<"Alice"<<endl;
        else if(y>x)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }
}
