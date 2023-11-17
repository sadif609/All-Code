
// Ashiqul Islam sadif


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
    while(t--)
    {
        int n;
    cin>>n;
    vector<ll> v(n);
    int p = 0;
     ll k = LLONG_MIN;
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }


    for(int i=1; i<n; i++){
        if((abs(v[i])%2) == (abs(v[i-1])%2)){
            k = max(k, maxs(v, p, i-1));
            p = i;
        }
    }
    k = max(k, maxs(v, p, n-1));
    cout << k << endl;
    }
}
