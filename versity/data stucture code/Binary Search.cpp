#include <iostream>

using namespace std;

int main()
{
    int N, i, ITEM, BEG, END, MID, LOC;
    cout<<"Enter the size of the Array: ";
    cin>>N;
    int DATA[N];

    for(i=1; i<=N; i++)
        cin>>DATA[i];
    cout<<"Stored Array DATA: ";
    for(i=1; i<=N; i++)
        cout<<DATA[i]<<" ";

    cout<<"\nEnter the search ITEM: ";
    cin>>ITEM;
    BEG=1, END = N, MID = (BEG+END)/2;
    while(BEG<=END && DATA[MID]!=ITEM)
    {
        if(ITEM<DATA[MID])
            END = MID-1;
        else
            BEG = MID+1;
        MID = (BEG+END)/2;
    }
    if (ITEM == DATA[MID])
        LOC = MID;
    else
        LOC = NULL;
    if(LOC == NULL)
        cout<<"ITEM is not in the Array DATA!!";
    else
        cout<<LOC<<" is the location of ITEM "<<ITEM;

}
