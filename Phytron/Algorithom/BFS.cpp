#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+5;
vector<int> adj[N];
int dist[N];
bool visited[N];
int level[N];
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v:adj[u])
        {
            if(visited[v]==true)continue;

            visited[v]=true;
            level[v]=level[u]+1;
q.push(v);
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        int s, d;
        cin >> s >> d;
        if(d>n || d<0 && s>n || s<0)
            cout<<-1<<endl;
        else
        {

            bfs(s);
            for(int i=0; i<N; i++)
                if(i==d)
                    cout << level[d] << endl;
        }

    }

    return 0;
}
