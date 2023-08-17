
#include<bits/stdc++.h>
using namespace std;
void Merge(int *,int, int, int );
void Sort(int *arr, int left, int right )
{
    int mid;
    if (left< right)
    {
        mid=(left+right)/2;
        Sort(arr,left,mid);
        Sort(arr,mid+1,right);
        Merge(arr,left,right,mid);
    }
}
void Merge(int *arr, int left, int right, int mid)
{
    int i, j, k, c[200];
    i = left;
    k = left;
    j = mid + 1;
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {

            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++)
    {
        arr[i] = c[i];
    }
}
int main()
{
    int num;
    cout<<"Enter the number of array size : ";
    cin>>num;
    int a[num];
    cout<<"Enter the element of array : ";
    for (int i = 0; i < num; i++)
        cin>>a[i];
    int left=0,right=num-1;
    Sort(a, left, right);
    cout<<"After the sorted array : ";
    for (int i = 0; i < num; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
