#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"type array nmbr"<<endl;

    cin>>n;
    int arr[n];
    cout<<"type array value"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int j,dlt,value;
    cout<<"Type your dlt position"<<endl;
    cin>>dlt;
    j=dlt;
    while(j<n)
    {
        arr[j]=arr[j+1];
        j++;
    }
    n=n-1;
    cout<<"After deleting"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;



}

