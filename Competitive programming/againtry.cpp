
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        stack<char>st;
        stack<char>stt;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++)
        {

            if(s[i]=='R' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='R')
            {
                st.push('P');
                i++;

            }
            else if(s[i]=='R' && s[i+1]=='G' || s[i]=='G' && s[i+1]=='R')
            {
                st.push('Y');
                i++;

            }
            else if(s[i]=='B' && s[i+1]=='G' || s[i]=='G' && s[i+1]=='B')
            {
                st.push('C');
                i++;

            }
            else
            {
                i++;
            }


        }
        if(n%2!=0)
            st.push(s[n-1]);


        int k=1,p=0;

        while(!st.empty())
        {
            if(st.top()!=stt.top() || stt.empty())
            {
                stt.push(st.top());
                st.pop();



            }
            else
            {

                p++;
                st.pop();

            }

        }
        if(stt.empty())
            cout<<" ";
        else
        {
            while(!stt.empty())
            {
                cout<<stt.top();
                stt.pop();
            }
        }



        cout<<endl;

    }
}
