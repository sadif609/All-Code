#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+5;

void bfs(const vector<vector<int>>& graph, int s, vector<int>& distances)
{

    vector<bool> visited(N, false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    distances[s] = 0;

    while (!q.empty())
    {
        int cv = q.front();
        q.pop();

        for (int j : graph[cv])
        {
            if (!visited[j])
            {
                q.push(j);
                visited[j] = true;
                distances[j] = distances[cv] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(N);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        int s, d;
        cin >> s >> d;

        vector<int> distances(N, -1);
        bfs(graph, s, distances);
            for(int i=0; i<N; i++)
                if(i==d)
                    cout << distances[d] << endl;



    }

    return 0;
}
