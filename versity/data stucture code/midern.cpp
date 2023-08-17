// CPP program to find median
#include <bits/stdc++.h>
using namespace std;

void Sort(int a[],int n)
{
    //array soring
    int i,j,temp;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                //swapping array
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"please enter array size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Sort(a,n);
    if (n % 2 != 0)
		cout<<"Median : "<<(double)a[n / 2];
		else
            cout<<"Median : "<<(double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
	return 0;
}




//
//#include<bits/stdc++.h>
//using namespace std;
//void Sort(int a[],int n)
//{
//    //array soring
//    int i,j,temp;
//
//    for(i=0; i<n-1; i++)
//    {
//        for(j=0; j<n-i-1; j++)
//        {
//            if(a[j]<a[j+1])
//            {
//                //swapping array
//                temp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//            }
//        }
//    }
//}
//
//int main ()
//{
//    double s=0,k=0,j,r=0,m=0,d=0,st=0;
//    int a[100],n,v=0, i;
//    cin>>n;
//    for (i=0; i<n; i++)
//    {
//        cin>>a[i];
//        s=(double)s+a[i];
//        //mean calculte
//        m=(double)s/n;
//    }
//    cout<<"Mean = "<<m<<endl;
//
//
////calculte stndr vrnt
//
//    for (i=0; i<n; i++)
//    {
//        d=pow((a[i]-m),2);
//        k=k+d;
//
//    }
//    st=sqrt(k/n);
//    cout<<"Standard Deviation = "<<st<<endl;
//
//
////calcalute median
//
//    Sort(a,n);
//
//
////    v=(n+1)/2-1;
////    cout<<"v er man : "<<v;
//
//
////    if (n%2!=0)
////    {
////        cout<<"Median = "<<(double)a[v]<<endl;
//////        printf ("Median = %.4lf\n",(double)a[v]);
////    }
////    else
////    {
////        for (i=v; i<=v+1; i++)
////        {
////            r=r+(double)a[i];
////
////        }
////        r=r/2;
////        cout<<"Median ="<<r<<endl;
//////        printf ("Median = %.4lf\n",r/2);
////    }
//
//}

//// CPP program to find median
//#include <bits/stdc++.h>
//using namespace std;
//
//// Function for calculating median
//double findMedian(int a[], int n)
//{
//	// First we sort the array
//	sort(a, a + n);
//
//	// check for even case
//	if (n % 2 != 0)
//		return (double)a[n / 2];
//
//	return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
//}
//
//// Driver program
//int main()
//{
//	int a[] = { 1, 3, 4, 2, 7, 5, 8, 6 };
//	int n = sizeof(a) / sizeof(a[0]);
//	cout << "Median = " << findMedian(a, n) << endl;
//	return 0;
//}

