#include<bits/stdc++.h>
#define MAX_SIZE 5
using namespace std;
int main()
{
    int choice,TOP=0,ITEM,i;
    int array_stack[MAX_SIZE];
    do
    {
        cout<<"\n\n ##Stack Main Menu##\n";
        cout<<"\n1.PUSH \n2.POP \n3.Display \nOthers to exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            if (TOP==MAX_SIZE)
                cout<<"Stack is overflow\n";
            else
            {
                cout<<"Enter the ITEM to be PUSHED\n";
                cin>>ITEM;
                cout<<"#position: "<<TOP<<" PUSHED VALUE: "<<ITEM<<endl;
                array_stack[TOP] = ITEM;
                TOP=TOP+1;

            }
            break;
        case 2:
            if(TOP==0)
                cout<<"##Stack is Empty !! Underflow\n";
            else{
                TOP--;
                cout<<"Position: "<<TOP<<" POPED value: "<<array_stack[TOP];
            }
            break;
        case 3:
            cout<<"Stack Size: "<<TOP<<endl;
            for(i=TOP-1;i>=0;i--)
                cout<<"#Poeition: "<<i<<" Value: "<<array_stack[i]<<endl;
            break;
        default:
            exit(0);
            break;


        }
    }
    while(exit);
}
