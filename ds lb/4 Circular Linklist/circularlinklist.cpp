#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*p;

void instatbeg(int num)
{
    struct node *temp=new node;
    temp->data=num;
    node *r;
    r=p;
    if(p==NULL)
    {
        temp->next=temp;
        p=temp;
    }
    else
    {
        while(r->next!=p)
        {
            r=r->next;
        }
        temp->next=p;
        r->next=temp;
        p=temp;
    }
}
void deleteatbeg()
{
    node *r,*m;
    r=p;
    if(p==NULL)
    {
        cout<<"\nLinked list is empty.";
    }
    else if(r->next==p)
    {
        p=NULL;
    }
    else
    {
        m=r->next;
        while(r->next!=p)
        {
            r=r->next;
        }
        r->next=m;
        p=m;
    }
}

void display()
{
    node *r;
    r=p;
    if(p==NULL)
    {
        cout<<"\nlinked list is empty.";
    }
    else
    {
        while(r->next!=p)
        {
            cout<<r->data;
            cout<<"\n";
            r=r->next;
        }
        cout<<r->data;
    }
}

int main()
{
    int num,choice;

    while(1)
    {
        cout<<"\n1. Insert.";
        cout<<"\n2. Delete.";
        cout<<"\n3. Display.";
        cout<<"\nEnter your choice.";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\nEnter the number to insert";
            cin>>num;
            instatbeg(num);
            break;

        case 2:
            deleteatbeg();
            break;

        case 3:
            display();
            break;
        }

    }

}
