
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int t,n,cnt[N],a[N];
void solve()
{int mex=0;
		cin>>n;
		vector<int>b;
		set<int>vis;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			vis.insert(a[i]);
			while(vis.count(mex)) mex++;
			cnt[a[i]]--;
			if(!cnt[mex]) {
				b.push_back(mex);
				vis.clear();
				mex=0;
			}
		}
		int l=b.size();
		cout<<l<<endl;
		for(int i=0;i<l;i++) cout<<b[i]<<" ";
		cout<<endl;

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
