

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
int solve( string s)
{
    ll sm=0;
    for( ll i=0; i<s.size(); i++)
    {
        sm=sm+(s[i]-'0');
    }
    return sm;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    string s;
    cin>>s;
    ll k=0;
sadif:

    if(s.size()==1)
        cout<<k<<endl;
    else
    {
        k++;

        stringstream ss;
        ss << solve(s);

        ss >> s;
        goto sadif;


    }

}
