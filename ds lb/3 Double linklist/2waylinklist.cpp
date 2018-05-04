#include<iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
}*head,*tail;
void addAtBeg(int num)
{
    node *temp = new node;
    temp->data=num;
    if(head==NULL && tail == NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void addAtEnd(int num)
{
    node *temp=new node;
    temp->data=num;
    if(head==NULL && tail == NULL)
    {
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=NULL;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}

void  addatpos(int num, int pos)
{
    node *temp=new node;
    node*r;
    r=head;
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        cout<<"LINK list is empty.";
    }

    else if(r->data==pos)
    {
        temp->next=r->next;
        temp->prev=r;
        r->next=temp;
        (r->next)->prev=temp;
    }
    else
    {
        while(r->data!=pos)
        {
            r=r->next;
        }
        temp->next=r->next;
        r->next=temp;
        temp->prev=r;
        (r->next)->prev=temp;
    }
}

void DelAtBeg()
{
    node *r = head->next;
    if(head==NULL && tail ==NULL)
    {
        cout<<"Link list is empty.";
    }
    else if(head->next=NULL)
    {
        head=NULL;
        tail=NULL;
    }
    else
    {
        r->prev=NULL;
        head=r;
    }
}

void DelAtEnd()
{
    node*r;
    r=tail;
    if(head=NULL && tail==NULL)
    {
        cout<<"Link list is empty.";
    }
    else
    {
        (r->prev)->next=NULL;
        tail=r->prev;
    }
}

void deltatsp(int num)
{
    node *r,*r1;
    r=head;
    r1=head->next;
    if(head==NULL && tail==NULL)
    {
        cout<<"Linked list is empty";
    }
    else
    {
        while(r->data!=num)
        {
            r=r->next;
            r1=r1->next;
        }
        (r->prev)->next=r->next;
        r1->prev=r->prev;
    }
}

void display()
{
    node *r = new node;
    r=head;
    if(head==NULL && tail== NULL)
    {
        cout<<"Link list is empty.";
    }
    else
    {
        while(r!=NULL)
        {
            cout<<r->data<<" ";
            r=r->next;
        }
    }
}
int main()
{
    int num,choice,pos;
    int op=-1;
    while(op!=1)
    {
        cout<<"\n1. Add at beginning.\n2. Add at end.\n3. After given location.\n4. Delete at Beginning.\n5. Delete at end.\n6. Delete a given node.\n7. Display.";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter Number To Insert at beginning : ";
            cin>>num;
            addAtBeg(num);
            break;

        case 2:
            cout<<"Enter number to insert at end : ";
            cin>>num;
            addAtEnd(num);
            break;

        case 3:
            cout<<"Enter your number.";
            cin>>num;
            cout<<"Enter position.";
            cin>>pos;
            addatpos(num,pos);
            break;

        case 4:
            DelAtBeg();
            cout<<"Number Deleted.";
            break;

        case 5:
            DelAtEnd();
            break;

        case 6:
            cout<<"Enter your number.";
            cin>>num;
            deltatsp(num);

        case 7:
            display();
            break;
        }
    }
}

