
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{

    map <char, int>m1;
    map <char, int>m2;
    map <string, int>s1;
    int n;
    cin >> n;
    ll s = 0;
    while(n--)
    {
        string a;
        cin >> a;
        s += m1[a[0]];
        s += m2[a[1]];
        s -= 2 * s1[a];
        m1[a[0]]++;
        m2[a[1]]++;
        s1[a]++;
    }
    if(s < 0)s = 0;
    cout << s << endl;
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
