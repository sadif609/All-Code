#include <iostream>
#include<bits/stdc++.h>
#define MAX_SIZE 5
using namespace std;
int main()
{
    int choice, TOP=0, ITEM, i;
    int array_stack[MAX_SIZE];
    do
    {
        system("CLS");
        cout<<"\n\n ##STACK MAIN MENU##";
        cout<<"\n1.PUSH \n2.POP \n3.Display \nOthers to exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            if(TOP==MAX_SIZE)
                cout<<"\nStack is Full!! OVERFLOW!";
            else
            {
                cout<<"\nEnter the ITEM to be PUSHED: ";
                cin>>ITEM;
                cout<<"\n#Position: "<<TOP<<", PUSHED value: "<<ITEM;
                array_stack[TOP] = ITEM;
                TOP = TOP+1;
            }
        break;

        case 2:
            if(TOP==0)
                cout<<"\nStack is EMPTY!! UNDERFLOW!!";
            else
            {
                TOP--;
                cout<<"\n#Position: "<<TOP<<", POPPED value: "<<array_stack[TOP];
            }
        break;

        case 3:
            system("CLS");
            cout<<"\n#Stack Size: "<<TOP;
            for(i=TOP-1; i>=0; i--)
                cout<<"\n#Position: "<<i<<", Value: "<<array_stack[i];
        break;

        default:
            exit(0);
        break;
        }
    }
    while(exit);
}
