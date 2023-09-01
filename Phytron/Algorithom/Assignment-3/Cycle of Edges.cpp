#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N=1e7+5;

vector<int> parent;

int find(int node)
{
    if (parent[node] == -1)
        return node;
    return find(parent[node]);
}

void unionNodes(int u, int v)
{
    int uParent = find(u);
    int vParent = find(v);

    if (uParent != vParent)
    {
        parent[uParent] = vParent;
    }
}

int countEdges(int n, vector<pair<int, int>>& edges)
{
    parent.assign(N + 1, -1);
    int cycleEdges = 0;

    for (auto edge : edges)
    {
        int u = edge.first;
        int v = edge.second;

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

    vector<pair<int, int>> edges;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }

    int result = countEdges(N, edges);

    cout << result << endl;

    return 0;
}
