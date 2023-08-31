#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    string s;
    cin>>s;
    ll p=b,m=b,k=b;
    if(a==b)
        cout<<"YES"<<endl;
    else{
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='-'){
                   p--;

            }
            if(s[i]=='+')
            {
                p++;
                k++;
            }
            m=max(m,p);
        }

      if(m>=a)
            cout<<"YES"<<endl;
       else  if(k>=a )
            cout<<"MAYBE"<<endl;
        else
            cout<<"NO"<<endl;

    }



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
