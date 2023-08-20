#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin>>s;
    int j=0;
    for(int i=s.length()-1; i>0; i--)
    {
        if((s[i]-'0')+(s[i-1]-'0')>=10)
        {
            j=i-1;
            break;
        }
    }
    cout<<s.substr(0,j)<<(s[j]-'0')+(s[j+1]-'0')<<s.substr(j+2)<<endl;


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

