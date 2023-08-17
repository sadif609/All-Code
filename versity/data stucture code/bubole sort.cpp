// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
    cout<<"Enter the Array Size: ";
	int n,i;
	cin>>n;
	int arr[n];
	srand(time(0));
    for(i=0; i<n; i++)
        arr[i] = rand()%50;
        cout<<"Inputed Array elements: ";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
        cout<<endl<<endl;
	bubbleSort(arr, n);

	cout<<"Sorted array: ";
	printArray(arr, n);
	return 0;
}


