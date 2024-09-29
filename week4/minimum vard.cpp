

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
void solve()
{
    string s = "";
    int n;

    cin >> n;
    for(int i = 9; i; i--)
    {
        if(n>=i)
        {
            s = to_string(i) + s;
            n-=i;
        }
    }

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
