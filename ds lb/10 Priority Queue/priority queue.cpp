#include <iostream>
using namespace std;
struct node
{
    int priority;
    int data;
    struct node *next;
}*frnt=NULL;
int ins()
{
    struct node *temp,*q = new node;
    int num,item_priority;
    cout<<"\nEnter : ";
    cin>>num;
    cout<<"\nEnter its priority :";
    cin>>item_priority;
    temp->data=num;
    temp->priority=item_priority;
    if(frnt==NULL || item_priority<frnt->priority)
    {
        temp->next=frnt;
        frnt=temp;
    }
    else
    {
        q=frnt;
        while(q->next!=NULL && q->next->priority<=item_priority)
        {
            q=q->next;
        }
        temp->next=q->next;
        q->next=temp;
    }
}
void del()
{
    struct node *temp;
    if(frnt==NULL)
    {
        cout<<"\nEmpty";
    }
    else
    {
        temp=frnt;
        cout<<"\nDeleted data is :";
        cout<<temp->data;
        frnt=frnt->next;
        delete(temp);
    }
}
void display()
{
    struct node *ptr=frnt;
    if(frnt==NULL)
    {
        cout<<"\nEmpty";
    }
    else
    {
        cout<<"------Queue------";
        cout<<"\nPriority\tData\n\n";
        while(ptr!= NULL)
        {
            cout<<ptr->priority<<"\t"<<ptr->data<<"\n";
            ptr=ptr->next;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1. Insert.\n2.Delete\n3.display";
        cin>>choice;
        switch(choice)
        {
        case 1:
            ins();
            break;

        case 2:
            del();
            break;

        case 3:
            display();
            break;

        default:
            cout<<"\nWrong Choice\n";
        }
    }
}
