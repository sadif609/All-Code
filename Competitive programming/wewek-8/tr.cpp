

// Ashiqul Islam sadif


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX






int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        ll n;
        ll minimum = 0;
        cin >> n;

        ll k=0;
        vector<ll>a(n+1);

        for(ll i=1;i<=n;i++)
        cin >> a[i];



        for (ll i = n - 1; i >= 1; i--)
        {
            if (a[i] <= a[i + 1])
                continue;

            k=(a[i]-1)/a[i+1];


            minimum+=k;

            k++;

            a[i]=a[i]/k;
        }

        cout << minimum;
        cout<<endl;
    }
}

