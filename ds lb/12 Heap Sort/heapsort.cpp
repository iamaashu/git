#include<iostream>
using namespace std;
int arr[10];
int n=0,ptr=0;
int item,k=0,last=0;
int par,leftt,rightt;
void inser()
{
    cout<<"\nEnter Item : ";
    cin>>item;
    n=n+1;
    ptr=n;
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=arr[par])
        {
            arr[ptr]=item;
        }
        arr[ptr]=arr[par];
        ptr=par;
    }
    arr[1]=item;
}

void del()
{
    item=arr[1];
    last=arr[n];
    n=n-1;
    ptr=1;
    leftt=2;
    rightt=3;
    while(rightt<=n)
    {
        if(last>=arr[leftt] && last>=arr[rightt])
        {
            arr[ptr]=last;
            return;
        }
        if(arr[rightt]<=arr[leftt])
        {
            arr[ptr]=arr[leftt];
            ptr=leftt;
        }
        else
        {
            arr[ptr]=arr[rightt];
            ptr=rightt;
        }

        leftt=2*ptr;
        rightt=leftt+1;
    }
    if(leftt==n && last<arr[leftt])
    {
        arr[ptr] = arr[leftt];
        ptr=leftt;
    }
    arr[ptr]=last;
}
int display()
{
    int i;
    cout<<"\nElements are : ";
    for(i=1; i<=n; i++)
    {
        cout<<"\n"<<arr[i];
    }
}

int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1. Insert.\n2. Delete\n3. Display.\nChoose Option : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            inser();
            break;

        case 2:
            del();
            break;

        case 3:
            display();
            break;

        default :
            cout<<"Wrong Choice !!!...";
        }
    }
}
