

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
#define     nl                              printf("\n")


bool isValid(int dif, int a[], int n, int c)
{
    int cnt = 1;
    int last = 0;
    fr(i,1,n)
    {
        if (abs(a[i] - a[last]) >= dif)
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}

void solve(){
int n, c;
        cin >> n >> c;
        int a[n];
        fr(i,0,n)
            cin >> a[i];
        sort(a, a + n);
        int l = 0;
        int r = N;
        int ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isValid(mid, a, n, c))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
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
