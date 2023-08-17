
#include <iostream>
#define MAX 5
using namespace std;


int Queue[MAX], Front = -1, Rear = -1;

void Insert()
{
    int item;
    if(Rear==MAX-1)
        {cout<<"OVERFLOW!!Queue is FULL!";
        return;
        }
    else if(Front==-1)
        Front = 0;
    cin>>item;
    Rear = Rear+1;
    Queue[Rear] = item;
    cout<<"Item "<<item<<" is inserted";
}

void Delete()
{
    if(Front==-1 || Front>Rear)
        {cout<<"UNDERFLOW!!Queue is Empty";
        return;
        }
    else
    {
       cout<<"Element deleted from the Queue is "<<Queue[Front];
       Front = Front+1;
    }

}

void Display()
{
    int i;
    if(Front==-1)
        cout<<"Queue is Empty";
    else
    {
        for(i=Front; i<=Rear; i++)
            cout<<Queue[i]<<" ";
    }
}

int main()
{

    int choice;

    cout<<"1 Insert element into Queue ";
    cout<<"\n2 Delete element Queue ";
    cout<<"\n3 Display elements of Queue";
    cout<<"\n4 Exit";


    do{
        cout<<"\nEnter your choice: ";
        cin>>choice;
        system("CLS");
        switch(choice)
        {
        case 1:

            Insert();

            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice";
            break;
        }

    }while(choice!=4);
    return 0;
}
