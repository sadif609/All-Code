#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int N, i, J, K, ITEM;
    cout<<"Enter the Array Size: ";
    cin>>N;
    int Array[N];
    srand(time(0));
    for(i=1; i<=N; i++)
        Array[i] = rand()%50;

    cout<<"Inputed Array elements: ";
    for(i=1; i<=N; i++)
        cout<<Array[i]<<" ";
    J = N;
    cout<<"\nEnter the position to be inserted a new item: ";
    cin>>K;
    cout<<"\nEnter the new ITEM: ";
    cin>>ITEM;
    while(J>=K)
    {
        Array[J+1] = Array[J];
        J=J-1;
    }
    Array[K] = ITEM;
    N = N+1;
    cout<<"\nFinal Array elements: ";
    for(i=1; i<=N; i++)
        cout<<Array[i]<<" ";
}
