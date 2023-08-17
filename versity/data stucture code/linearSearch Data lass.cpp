#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int N, i, ITEM, LOC=1;
    cout<<"Enter the size of the Array: ";
    cin>>N;
    int DATA[N];
    srand(time(0));
    for(i=1; i<=N; i++)
        DATA[i]=rand()%50;;

    cout<<"Stored Array DATA: ";
    for(i=1; i<=N; i++)
        cout<<DATA[i]<<" ";
    cout<<"\nEnter the search ITEM: ";
    cin>>ITEM;

    while(DATA[LOC]!=ITEM && LOC<=N)
        LOC = LOC+1;
    if(LOC == N+1)
        cout<<"ITEM is not in the Array DATA!!";
    else
        cout<<LOC<<" is the location of ITEM "<<ITEM;
}
