
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3+5;
const int INF =1e9+10;
typedef pair<int,int> pii;
vector<pair<int,int>>adj[N];
vector<int>dist(N,INF);
vector<bool>visited(N);

void djk(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dist[source]=0;
    pq.push({dist[source],source});

    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        visited[u]=true;
        for(pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if(visited[v])
                continue;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                 pq.push({dist[v],v});
            }

        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
         adj[v].push_back({u,w});

    }
    djk(1);
    for(int i=0;i<n;i++)
    {
        cout<<"disktra of node " <<i<<" : " <<dist[i]<< endl;
    }



}
