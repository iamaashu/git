#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,n,temp;
    cout<<"Enter array size : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter elements in array.";
        cin>>arr[i];
    }
    cout<<"\nBubble sorting:";
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\nEntered element is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
