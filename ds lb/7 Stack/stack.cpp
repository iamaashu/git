#include<iostream>
#define MAX 5
using namespace std;
int arr[MAX];
int top=-1;
void push()
{
    int num;
    if(top==MAX-1)
    {
        cout<<"\nStack is full";
    }
    else
    {
        cout<<"\nEnter Element : ";
        cin>>num;
        top=top+1;
        arr[top]=num;
    }
}
void pop()
{
    int temp;
    if(top==-1)
    {
        cout<<"\nStack Is Empty!!!";
    }
    else
    {
        temp=arr[top];
        top--;
        cout<<"\n"<<temp<<" is Deleted";
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty";
    }
    else
        cout<<"\nElements are : ";
        for(int i=top; i>=0; i--)
        {
            cout<<"\n"<<arr[i]<" \n";
        }
}
int main()
{

    int num;
    int op=-1;
    while(op!=0)
    {
        cout<<"\n1. Push\n2. Pop\n3. Display\nEnter Your Options - > ";
        cin>>op;
        switch(op)
        {
        case 1:
            push();
            break;

        case 2 :
            pop();
            break;

        case 3 :
            display();
            break;
        }
    }
}

