#include<bits/stdc++.h>
using namespace std;

int t, n, ans;
int a[1000005];

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(i > 0 && a[i] != a[i-1]) ans++;
        }
        if(a[n-1] == 1) ans++;
        cout << ans << endl;
    }
    return 0;
}
