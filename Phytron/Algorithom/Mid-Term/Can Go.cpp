
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long N = 10000009;
vector<pair<ll, ll>> v[N];
ll dis[N];
bool vis[N];
void dijkstra(ll s)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    pq.push({0, s});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll parentNode = parent.second;
        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;
        ll parentCost = parent.first;
        for (ll i = 0; i < v[parentNode].size(); i++)
        {
            pair<ll, ll> child = v[parentNode][i];
            ll childNode = child.first;
            ll childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        // v[b].push_back({a, w});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    ll s;
    cin>>s;

    dijkstra(s);
    ll t;
    cin>>t;
    while(t--)
    {
        ll d,ds;
        cin>>d>>ds;

        for (ll i = 1; i <= n; i++)
        {
            if(i==d)
            {
                if(dis[i]<=ds)
                cout << "YES" << endl;
                else
                    cout<<"NO"<<endl;
            }

        }

    }

    return 0;
}
