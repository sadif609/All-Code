#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        string s[n];
        set<int>st;
        for(int i=0; i<n; i++){
            cin >> s[i];
            int f=0,ff=0;
            for(int j=0; j<k; j++){
                if(s[i][j]=='1'){
                    f++;
                    ff=j;
                }
            }
            if(f==1){
                st.insert(ff);
            }
        }
        if(st.size()==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
