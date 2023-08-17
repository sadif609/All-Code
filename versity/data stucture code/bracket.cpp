#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbol={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string breackt(string s)
{
    stack <char> st;
    for(char b:s)
    {
        if(symbol[b]<0)
        {
            st.push(b);
        }
        else{
            if(st.empty()) return "NO";
            char top= st.top();
            st.pop();
            if(symbol[top]+symbol[b]!=0)
            {
               return "NO";

            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<breackt(s);
    }
}
