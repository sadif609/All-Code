
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
        cin>>n;
        string a,b,r;
        cin>>a;
        char c=a[0];
        b.push_back(c);
        if(c=='a')
        {
            cout<<"aa"<<endl;
            continue;
        }
        if(c==a[1])
        {
            cout<<c<<c<<endl;
            continue;
        }

        for(int i=1; i<n; i++)
        {
            if(a[i]<=a[i-1])
            {
                b.push_back(a[i]);
            }
            else
                break;
        }
        cout<<b;
        reverse(b.begin(),b.end());
        cout<<b<<endl;

    }
}
