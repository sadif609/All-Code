
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int bsearch(int a[],int n,int k)
{
    int lo;
    int hi;
    int mid;
    int i;
    long long int count;
    lo = 1;
    hi = a[n-1];

    while(lo < hi) {
        mid = lo + (hi-lo+1)/2;
        count = 0;
        for(i = 0; i < n; i++) {
                cout<<mid<<endl;
            if(a[i] > mid) {
                count = count + (a[i]-mid);
                cout<<"cnt : "<<count<<" ";
            }
        }

        if(count >= k) {
            lo = mid;
            cout<<"lo : "<<lo;
        }
        else {
            hi = mid-1;
            cout<<"hi : "<<hi;
        }
        cout<<endl;
    }

    return lo;

}
int main()
{
    long long int k;
    int n;
    int t;

    int i;
    int ans;




        scanf("%d%lld",&n,&k);

        for(i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }

        sort(a,a+n);

        ans = bsearch(a,n,k);

        printf("%d\n",ans);




}
