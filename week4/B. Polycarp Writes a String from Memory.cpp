

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    string s;
    cin>>s;
    set<char>st;
    int k=1;
    for(int i=0; i<s.size(); i++)
    {
        st.insert(s[i]);
        if(st.size()==4)
        {
            st.clear();
            st.insert(s[i]);
            k++;
        }
    }


    cout<<k<<endl;

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
