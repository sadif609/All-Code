
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    string s,a,b,c;
    cin>>s;
    int j=0,k=0;
    for(int i=0;i<20200;i++)
    {

        if(s[0]=='c' || s[1]=='o' || s[2]=='d' || s[3]=='e' || s[4]=='c' || s[5]=='h' || s[6]=='e' || s[7]=='f')
        {
            if(j<7)
           s[j]=s[j+1];
           else
            s[j]=s[j-1];
        }
        j++;
        if(j==7)
            j=0;

    }
    for(int i=0;i<8;i++)
    {
        if(s[0]=='c' || s[1]=='o' || s[2]=='d' || s[3]=='e' || s[4]=='c' || s[5]=='h' || s[6]=='e' || s[7]=='f')
            k++;

    }
    if(k)
        cout<<-1<<endl;
    else
    cout<<s<<endl;

//
//    string s,s2="codechef";
//    cin>>s;
//    set<char>a;
//    for(int i=0; i<8; i++)
//    {
//        a.insert(s[i]);
//    }
//    ll i=0;
//
//    if(a.size()>1)
//    {
//        while(s[0]=='c' && s[1]=='o' && s[2]=='d' && s[3]=='e' && s[4]=='c' && s[5]=='h' && s[6]=='e' && s[7]=='f' )
//        {
//            if(s[0]=='c' || s[1]=='o' || s[2]=='d' || s[3]=='e' || s[4]=='c' || s[5]=='h' || s[6]=='e' || s[7]=='f')
//            {
//
//            }
//            if(i==7)
//                swap(s[i],s[i-1]);
//            else
//                swap(s[i],s[i+1]);
//            i++;
//            if(i==8)
//                i=0;
//        }
//        cout<<s<<endl;
//    }
//        else
//        cout<<-1<<endl;

//    if(a.size()>1)
//    {
//        for(int i=0; i<8; i++)
//        {
//            ll k=1,j=0;
//
//
//            if(s[0]=='c' || s[4]=='c')
//            {
//                while(k!=0)
//                {
//                    if(s[0]!='c' && s[4]!='c')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//
//            }
//            if(s[1]=='o')
//            {
//                while(k!=0)
//                {
//                    if(s[1]!='o')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//            }
//            if(s[2]=='d')
//            {
//                while(k!=0)
//                {
//                    if(s[2]!='d')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//
//            }
//            if(s[3]=='e' || s[6]=='e' )
//            {
//                while(k!=0)
//                {
//                    if(s[3]!='e' && s[6]!='e')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//
//
//            }
//
//            if(s[5]=='h')
//            {
//                while(k!=0)
//                {
//                    if(s[5]!='h')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//            }
//
//            if(s[7]=='f')
//            {
//                while(k!=0)
//                {
//                    if(s[7]!='f')
//                        k=0;
//                    swap(s[j],s[j+1]);
//                    j++;
//                    if(j==7)
//                        j=0;
//
//                }
//            }
//        }
//        cout<<s<<endl;
//
//    }
//    else
//        cout<<-1<<endl;





}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
}
