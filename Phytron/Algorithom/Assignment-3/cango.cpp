#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF=1e18+7;
const ll N = 1e3+5;
ll dis[1005 ];
bool cycle = false;
ll n, e,s,d,k=0;
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
vector<Edge> v;
void blmn(ll s)
{

    for (ll i = 1; i <= n; i++)
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
        if (dis[a] !=INF && dis[a] + w < dis[b] )
        {
            cycle = true;
            break;

        }
    }

}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    blmn(1);



    if (cycle)
    {
        k=1;

    }
    ll q;
    cin>>s>>q;
    while(q--)
    {

        cin>>d;
        if(k==0 )
        {
            blmn(s);
            if(dis[d]==INF )
                cout<<"Not Possible"<<endl;
            else
                cout<<dis[d]<<endl;

        }

    }
    if(k)
        cout<<"Negative Cycle Detected"<<endl;



    return 0;
}
