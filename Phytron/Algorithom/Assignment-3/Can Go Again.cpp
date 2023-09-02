#include <bits/stdc++.h>
#define ll long long
const ll INF = 1e18 + 5;
using namespace std;

struct Edge {
    ll src, dest, weight;
};

bool bellmanFord(vector<Edge>& edges, ll V, ll E, ll src, vector<ll>& distance) {
    distance[src] = 0;

    for (ll i = 0; i < V - 1; ++i) {
        for (ll j = 0; j < E; ++j) {
            ll u = edges[j].src;
            ll v = edges[j].dest;
            ll weight = edges[j].weight;
            if (distance[u] != INF && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
            }
        }
    }

    // Check for negative weight cycles
    for (ll i = 0; i < E; ++i) {
        ll u = edges[i].src;
        ll v = edges[i].dest;
        ll weight = edges[i].weight;
        if (distance[u] != INF && distance[u] + weight < distance[v]) {
            return true;
        }
    }

    return false;
}

int main() {
    ll N, E;
    cin >> N >> E;

    vector<Edge> edges(E);

    for (ll i = 0; i < E; ++i) {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    ll S;
    cin >> S;

    ll T;
    cin >> T;
    vector<ll> v;

    while (T--) {
        ll D;
        cin >> D;

        vector<ll> distance(N, INF);

        if (bellmanFord(edges, N, E, S, distance)) {
            cout << "Negative Cycle Detected" << endl;
            return 0;  // Terminate immediately if a negative cycle is found
        } else if (distance[D] == INF) {
            v.push_back(INF);
        } else {
            v.push_back(distance[D]);
        }
    }

    for (auto i : v) {
        if (i == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
