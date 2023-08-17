#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int N, i, J, K;
    cout<<"Enter the Array Size: ";
    cin>>N;
    int Array[N];
    srand(time(0));
    for(i=1; i<=N; i++)
        Array[i] = rand()%50;

    cout<<"Inputed Array elements: ";
    for(i=1; i<=N; i++)
        cout<<Array[i]<<" ";

    cout<<"\nEnter the position to be deleted an item: ";
    cin>>K;

    for(J=K; J<=N; J++)
    {
        Array[J] = Array[J+1];
    }

    N = N-1;
    cout<<"\nFinal Array elements: ";
    for(i=1; i<=N; i++)
        cout<<Array[i]<<" ";
}
