#include<iostream>
#define MAX 5
using namespace std;
int arr[MAX],frnt=-1,rear=-1;
void add()
{
    int num;
    if(rear==MAX-1)
    {
        cout<<"\nQueue is full.";
    }
    else
    {
        cout<<"\nEnter Element : ";
        cin>>num;
        if(frnt==-1)
        {
            frnt=0;
        }
        rear=rear+1;
        arr[rear]=num;
    }
}
 void del()
 {
     if(frnt==-1)
     {
         cout<<"\nQueue is empty.";
     }
     else if(frnt==rear && frnt!=-1)
     {
         frnt=-1;
         rear=-1;
         cout<<"\nQueue is empty";
     }
     else
     {
         frnt=frnt+1;
         cout<<"\nElement Deleted.";
     }
 }

 void display()
 {
     int i;
     if(frnt==-1)
     {
         cout<<"\nQueue is empty.";
     }
     else
     {
         cout<<"\nElements are : ";
         for(i=frnt;i<=rear;i++)
         {
             cout<<arr[i]<<"\n";
         }
     }
 }
int main ()
{
	int choice;
	while(1)
	{
		cout<<"\nMenu";
		cout<<"\n1. Add";
		cout<<"\n2. Delete ";
		cout<<"\n3. Display ";
		cout<<"\nEnter Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				add();
				break;

			case 2:
				del();
				break;

			case 3:
				display();
				break;

			default:
				cout<<"Wrong Choice.";
		}
	}
}
