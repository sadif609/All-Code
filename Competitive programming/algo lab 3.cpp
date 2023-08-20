#include<bits/stdc++.h>
using namespace std;
int main()
{
    int graph[5][5]=
    {
        { 0, 0, 0, 0, 0},
        { 3, 0, 0, 0, 0},
        { 1, 2, 0, 0, 0},
        { 0, 4, 5, 0, 0},
        { 0, 0, 3, 6, 0}
    };
    int Min = 999,x=-1,y=-1;
    int counter = 0;
    int root[5] = {999, 999, 999, 999, 999};
    cout<<"My Name is MD Ashiqul Islam"<<endl<<"My ID is : 212002056"<<endl;
    while(Min!=1000)
    {
        Min = 1000;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(graph[i][j]!=0 && graph[i][j]<=Min)
                {
                    Min = graph[i][j];
                    x = i;
                    y = j;

                }
            }
        }
        counter++;

        if(counter == 1)
        {

            cout<<counter<<"the Edge : "<<x<< " & "<<y<<endl;
            if(x<y)
            {
                root[x] = x;
                root[y] = x;
            }
            else
            {
                root[y] = y;
                root[x] = y;
            }

        }
        if(Min!=1000 && counter!=1)
        {

            cout<<counter<<"the Edge : "<<x<< " & "<<y<<endl;
            graph[x][y] = graph[y][x] = 0;
            if(root[x]==999 || root[y]==999)
            {
                if(root[y] == 999)
                    root[y] = x;
                else
                    root[x] = y;
            }
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Root of "<<i<<" th node is : "<<root[i]<<endl;
    }
}
