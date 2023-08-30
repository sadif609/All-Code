#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    ll n,m;
    cin>>n>>m;
    if(n>m)
        cout<<"New"<<endl;
    else if(n<m)
        cout<<"Old"<<endl;
    else
        cout<<"Same"<<endl;


}

