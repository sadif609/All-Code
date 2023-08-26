

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int,int>
using namespace std;
const int N = 105;
int vis[N][N];
int dis[N][N];
int n, m,si,sj,d1,d2;
vector<pi> path = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2},{2,1},{2,-1},{-2,1},{-2,-1}};
bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
     vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            pi p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
    }
}

void reset()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dis[i][j]=-1;
            vis[i][j]=false;
        }
    }

}

int main()
{
    int t;
    cin>>t;
   while(t--){
        cin>>n>>m;
        cin>>si>>sj;
        cin>>d1>>d2;
        reset();

        bfs(si,sj);
//        if(n<=2 && m<=2 || min(n,m)<2)
//        cout<<-1<<endl;
//        else
             cout<<dis[d1][d2]<<endl;




        reset();
    }
    return 0;
}
