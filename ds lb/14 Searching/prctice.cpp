#include<iostream>
using namespace std;
int main()
{
    int arr[10],arr2[10],mergee[20];
    int i,k,n,n1,n2;
    cout<<"\nEnter size of an array : ";
    cin>>n1;
    cout<<"\nInsert elements in 1st array : ";
    for(i=0; i<n1; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter size of an 2nd array : ";
    cin>>n2;
    cout<<"\nInsert elements in 2nd array : ";
    for(i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    for(i=0; i<n1; i++)
    {
        mergee[i]=arr[i];
    }
    n= n1+n2;
    for(i=0,k=n1; k<n && i<n2 ; i++,k++)
    {
        mergee[k]=arr2[i];
    }
    cout<<"\nnew array is : ";
    for(i=0; i<n; i++)
    {
        cout<<mergee[i]<<" ";
    }
}
