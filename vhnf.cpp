
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

const long long INF = 1e18;


bool belowAvg(ll val, double avg) {
    return val < avg;
}

bool isMoreThanHalfUnhappy(ll n, vv<ll>& arr, ll total, ll addVal) {
    vv<ll> newArr = arr;
    newArr[n - 1] += addVal;
    double newAvg = (total + addVal) / (2.0 * n);
    ll unhappyCount = count_if(newArr.begin(), newArr.end(), [&](ll w) { return belowAvg(w, newAvg); });
    return unhappyCount > n / 2;
}

ll findMinGold(ll n, vv<ll>& arr, ll sum) {
    ll left = 0, right = INF, result = -1;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (isMoreThanHalfUnhappy(n, arr, sum, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

ll readAndSum(vv<ll>& arr, ll n) {
    ll sum = 0;
    fr(i,0,n) {
        cin >> arr[i];
        sum += arr[i];
    }
    return sum;
}

void processCase() {
    ll n;
    cin >> n;
    vv<ll> arr(n);
    ll sum = readAndSum(arr, n);

    if (n < 3) {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    cout << findMinGold(n, arr, sum) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);

    ll t;
    cin >> t;

    while (t--) {
        processCase();
    }

    return 0;
}
