
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=109;
const ll INF = 1e18+5;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll dis[N + 1][N + 1];
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 1; j <= N; j++)
        {
            dis[i][j] = INF;
            if (i == j)
                dis[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        if(dis[a][b]<w)
            continue;
        dis[a][b] = w;
    }


    for (ll k = 1; k <= N; k++)
    {
        for (ll i = 1; i <= N; i++)
        {
            for (ll j = 1; j <= N; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
   ll q;
   cin>>q;
   while(q--)
   {
       ll x,y;
       cin>>x>>y;
       if(dis[x][y]==INF)
        cout<<-1<<endl;
       else
       cout<<dis[x][y]<<endl;
   }



    return 0;
}
