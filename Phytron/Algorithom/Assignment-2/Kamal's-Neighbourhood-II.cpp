#include<bits/stdc++.h>

using namespace std;

const int N = 30;
map<int, vector<int> > adjList;
bool visited[N];
int c;

void dfs(int u,int &c)
{
    c++;
    visited[u] = true;
    for(int i = 0 ; i < adjList[u].size() ; i ++)
    {
        int v = adjList[u][i];
        if(visited[v] != true)
        {
            dfs(v,c);
        }
    }
}

int main()
{
    memset(visited, 0, sizeof(visited));
     int n,m;
    cin>>n>>m;
    for(int i = 0 ; i < m ; i ++)
    {
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);

    }

    int x;
    cin>>x;

    for(int i = 0 ; i <n ; i++)
    {
        if(!visited[i] && x==i)
        {
            c=0;
            dfs(i,c);
            cout<<c-1<<endl;


        }
    }

}
