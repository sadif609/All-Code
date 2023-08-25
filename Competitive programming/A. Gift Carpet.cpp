

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
string s[30];
void solve()
{

   int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)cin>>s[i];
	string ned="vika";
	int t=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j][i]==ned[t])
			{
				t++;break;
			}
		}
	}
	if(t==4)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;


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
