#include<bits/stdc++.h>
#define ll int

using namespace std;
const int N=1e5+7;

vector<int> parent;

int find(ll node)
{
    if (parent[node] == -1)
        return node;
    return find(parent[node]);
}

void unionNodes(ll u, ll v)
{
    ll uParent = find(u);
    ll vParent = find(v);

    if (uParent != vParent)
    {
        parent[uParent] = vParent;
    }
}

int countEdges(ll n, vector<pair<ll, ll>>& edges)
{
    parent.assign(n + 1, -1);
    ll cycleEdges = 0;

    for (auto edge : edges)
    {
        ll u = edge.first;
        ll v = edge.second;

        if (find(u) == find(v))
        {

            cycleEdges++;
        }
        else
        {
            unionNodes(u, v);
        }
    }

    return cycleEdges;
}

int main()
{
    ll n, e;
    cin >> n >> e;

    vector<pair<ll, ll>> edges;

    for (ll i = 0; i < e; i++)
    {
        ll a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }

    ll result = countEdges(n, edges);

    cout << result << endl;

    return 0;
}
