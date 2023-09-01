#include <bits/stdc++.h>
#define ll long long
const ll INF = 1e18+5;
const ll N= 1e5+5;
ll sum=0,k=0;
const ll MAX = 1e7 + 5;
ll id[MAX], n, e;
using namespace std;

pair <long long, pair<ll, ll> > p[MAX];
void init()
{
    for(int i = 0; i < MAX; ++i)
        id[i] = i;
}
int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}
void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
long long kruskal(pair<long long, pair<ll, ll> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0; i < e; ++i)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        if(root(x) != root(y))
        {
            k++;
            minimumCost += cost;
            union1(x, y);
        }
    }
    return minimumCost;
}
int main()
{
    int x, y;
    ll w, cost, minimumCost;
    init();

    cin >> n >> e;
    for(int i = 0; i < e; ++i)
    {

        cin >> x >> y >> w;
        p[i] = make_pair(w, make_pair(x, y));
    }
    sort(p, p + e);
    minimumCost = kruskal(p);
    if(k==n-1)
        cout << minimumCost << endl;
    else
        cout<<-1<<endl;
    return 0;
}
