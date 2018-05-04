#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,n,num,c=0,pos;
    cout<<"Enter array size : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter elements in array.";
        cin>>arr[i];
    }
    cout<<"\nEnter number to be search : ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            c=1;
            pos=i+1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Number Not Found!!!...";
    }
    else
    {
        cout<<num<<" is Found at position "<<pos;
    }
}
