#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fRead freopen("in.txt","r",stdin);
#define fWrite freopen ("out.txt","w",stdout);

#define vi vector <int>
#define vl vector <ll>
#define pii pair <int, int>
#define MOD 1000000007
#define INF 1e18
#define PI acos(-1)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define MEM(a,x) memset(a,x,sizeof(a))
#define ll long long
#define llu unsigned long long
#define endl '\n'

using namespace std;

const int N = 200005;


void solve()
{
    string s;
    vector <int> a;
    cin >> s;
    int n = s.size();
    int cn = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cn++;
        }
        else{
            a.pb(cn);
            cn = 0;
        }
    }
    if(s[n-1] == '1'){
        a.pb(cn);
    }


    // if(s[n-1] == '1' && s[n-2] == '0'){
    //     a.pb(1);
    // }
    // if(s[n-1] == '1' && s[n-2] == '1'){
    //     a.pb(cn);
    // }
    sort(all(a));
    n = a.size();
    int sum = 0;
    for(int  i = n - 1; i >= 0; i -= 2){
        sum += a[i];
    }
    cout << sum << endl;
}

int main()
{
    fastio();


    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        //cout << "Case " << t << ": ";
        solve();
    }

    return 0;
}
