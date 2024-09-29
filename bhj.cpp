

// Ashiqul Islam sadif

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define     vv   vector
#define     vi   vector<int>
#define     vb   vector<bool>
#define     vs    vector<string>
#define     vl    vector<ll>
#define     si   set<int>
#define     sl   set<ll>
#define     ull   unsigned long long int
#define     ui    unsigned int
#define     pp    pair
#define     pb    push_back
// full array
#define fr(i, s, n) for (ll i = s; i < n; i++)
#define     all(x)  x.begin(),x.end()
#define     all_0(x)    memset(x,0,sizeof(x))
#define     all_neg(x)  memset(x,-1,sizeof(x))
#define     all_1(x)   memset(x,1,sizeof(x))
// print option
#define     YES                             printf("YES\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              cout<<"\n"
#define INF 1000000000
#define mod 1000000007
int main()
{
	int t;
	scanf("%d", &t);

	pair<int,int> a[100006];

	while (t--) {
		int n, p;
		scanf("%d %d", &n, &p);

		for (int i=0;i<n;i++) {
			scanf("%d", &a[i].second);
		}

		for (int i=0;i<n;i++) {
			scanf("%d", &a[i].first);
		}

		sort(a, a+n);

		int x = 0;
		long long c = 0;

		for (int i=0;i<n;i++) {
			if (x) x--;
			else c += p;

			if (a[i].first < p) {
				int d = min(n-(i+1)-x, a[i].second);
				c += a[i].first * (long long)d;
				x += d;
			}
		}

		printf("%lld\n", c);
	}
}
