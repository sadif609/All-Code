#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF=1e18+2;
const ll N = 1e3+2;
ll dis[N + 1];
bool cycle = false;
ll n, e,s;
class Edge
{
public:
    ll u;
    ll v;
    ll w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};



int main()
{
    cin >> n >> e;
    vector<Edge> v;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    ll q;
    cin>>s>>q;


    for (ll i = 1; i <= N; i++)
    {
        dis[i] = INF;
    }
    dis[s] = 0;
    for (ll i = 1; i <= n - 1; i++)
    {
        for (ll j = 0; j <v.size(); j++)
        {
            Edge ed = v[j];
            ll a = ed.u;
            ll b = ed.v;
            ll w = ed.w;
            if ( dis[a]!=INF && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    for (ll j = 0; j < v.size(); j++)
    {
        Edge ed = v[j];
        ll a = ed.u;
        ll b = ed.v;
        ll w = ed.w;
        if (dis[a] + w < dis[b])
        {
            cycle = true;
            break;

        }
    }
    ll k=0;


    if (cycle)
    {
        k=1;

    }
    while(q--)
    {
        ll d;
        cin>>d;
        if(k==0 )
        {
            if(dis[d]==INF || dis[d]>=INF-1000)
                cout<<"Not Possible"<<endl;
            else
                cout<<dis[d]<<endl;

        }

    }
    if(k)
        cout<<"Negative Cycle Detected"<<endl;



    return 0;
}
