#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,n,j,temp;
    cout<<"\nEnter size of an array : ";
    cin>>n;
    cout<<"\nInsert elements in array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse of array is : ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
