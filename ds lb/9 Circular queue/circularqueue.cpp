#include<iostream>
using namespace std;
int que[10],frnt=0,rear=0,n=5,num;
void add()
{
    cout<<"Enter Data:";
    cin>>num;
    if((frnt==1 && rear==n) || (frnt==rear+1))
    {
        cout<<"\nQueue is Full";
        return;
    }
    if(frnt==0)
    {
        frnt=1;
        rear=1;
    }
    else if(rear==n)
    {
        rear=1;
    }
    else
    {
        rear=rear+1;
    }
    que[rear]=num;
    return;
}
void del()
{
    if(frnt==0)
    {
        cout<<"\nQueue is Empty";
        return;
    }
    num=que[frnt];
    cout<<"\nElement Deleted";

    if(frnt==rear)
    {
        frnt=0;
        rear=0;
    }

    else if(frnt==n)
    {
        frnt=1;
    }
    else
    {
        frnt=frnt+1;
    }
    return;
}
void display()
{
    int i;
    if(frnt==0)
    {
        cout<<"\nQueue is Empty";
        return;
    }
    if(frnt<=rear)
    {
        for(i=frnt; i<=rear; i++)
        {
            cout<<"\n"<<que[i];
        }
    }
    else
    {
        for(i=frnt; i<=n; i++)
        {
            cout<<"\n"<<que[i];
        }
        for(i=1; i<=rear; i++)
        {
            cout<<"\n"<<que[i];
        }

    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1. Insert.\n2. Delete.\n3. Display.\nChoose Options : ";
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
            cout<<"Wrong Input...PLZ TRY AGAIN:";
        }
    }
}
