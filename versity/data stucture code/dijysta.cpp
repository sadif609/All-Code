#include<iostream>
#include<climits>
using namespace std;
int pl;

// this method returns a minimum distance for the
// vertex which is not included in Tset.
int minimumDist(int dist[], bool Tset[])
{
    int min=INT_MAX,index;

    for(int i=0; i<10; i++)
    {
        if(Tset[i]==false && dist[i]<=min)
        {
            min=dist[i];
            index=i;
        }
    }
    return index;
}

void Dijkstra(int graph[10][10],int src) // adjacency matrix used is 6x6
{
    int dist[10]; // integer array to calculate minimum distance for each node.
    bool Tset[10];// boolean array to mark visted/unvisted for each node.

    // set the nodes with infinity distance
    // except for the initial node and mark
    // them unvisited.
    for(int i = 0; i<10; i++)
    {
        dist[i] = INT_MAX;
        Tset[i] = false;
    }

    dist[src] = 0;   // Source vertex distance is set to zero.

    for(int i = 0; i<10; i++)
    {
        int m=minimumDist(dist,Tset); // vertex not yet included.
        Tset[m]=true;// m with minimum distance included in Tset.
        for(int i = 0; i<10; i++)
        {
            // Updating the minimum distance for the particular node.
            if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
                dist[i]=dist[m]+graph[m][i];
        }
    }
    cout<<"Vertex\t\tDistance from source"<<endl;
    cout<<" the place which : ";
    cin>>pl;
    for(int i = 0; i<10; i++)
    {
        //Printing
        char str=65+i; // Ascii values for pritning A,B,C..
        cout<<str<<"\t\t\t"<<dist[i]<<endl;
    }
    cout<<"the place of "<<dist[pl];
}

int main()
{
    int graph[10][10]=
    {
        {0, 2, 10, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 10, 0, 0, 0, 0, 0},
        {10, 0, 0, 12, 0, 0, 30, 0, 0, 0},
        {0, 0, 12, 0, 0, 0, 0, 14, 0, 15},
        {0, 10, 0, 0, 0, 15, 0, 0, 0, 35},
        {0, 0, 0, 0, 15, 0, 10, 0, 0, 0},
        {0, 0, 30, 0, 0, 10, 0, 10, 0, 0},
        {0, 0, 0, 14, 0, 0, 10, 0, 10, 0},
        {0, 0, 0, 0, 0, 0, 0, 10, 0, 15},
        {0, 0, 0, 15, 35, 0, 0, 0, 15, 0}
    };
        int sc;
    cout<<"enter the sourch vrtx :";
    cin>>sc;
    Dijkstra(graph,sc-1);
    return 0;
}
