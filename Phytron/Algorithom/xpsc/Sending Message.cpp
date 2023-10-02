#include <bits/stdc++.h>
#define ll long long
#define N  INT_MAX
using namespace std;

int main()
{
    string a, b;
    while(cin>>a>>b )
    {



        ll n = a.size(), m = b.size();

        ll x = 0;
        bool ans = false;
        for (char c : a)
        {
            if (c == b[x])
            {
                x++;
            }
            if (x == b.size())
            {
                ans = true;
                break;
            }
        }

        if (ans)
            cout << "Possible"<<endl;
        else
            cout << "Impossible"<<endl;

    }



    return 0;
}
