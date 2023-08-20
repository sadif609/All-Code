
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    // number of stacks (n) and max height for stacks (H)

    ll n,h,p=0;
    cin>>n>>h;

    // array for height of stack

    ll a[n];

    // array for operation

    ll b[100005];

    // taking height as input

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // taking operations as input

    ll jim;
    while(cin>>jim)
    {
        b[p]=jim;
        p++;
        if(jim==0)
        {
            break;
        }
    }

    // variable to know if box is already present at crane or not
    // if box is present then k=1 otherwise 0
    // initially there was no box at crane

    ll k=0;

    // variable to determine crane position
    // initially crane was at 0th stack

    ll j=0;

    //traversing through operation array

    for(ll i=0; i<p; i++)
    {



        if(b[i]==0)
        {
            break;
        }



        else if(b[i]==1)
        {
            if(j!=0)
            {
                j=j-1;
            }
        }



        else if(b[i]==2)
        {
            if(j!=n-1)
            {
                j=j+1;
            }
        }


        else if(b[i]==3)
        {
            if(k!=1 && a[j]!=0)
            {
                k=1;
                a[j]=a[j]-1;
            }
        }


        else
        {
            if(k!=0 && a[j]<h)
            {
                k=0;
                a[j]=a[j]+1;
            }
        }
    }

    // print the final heights of stacks

    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
