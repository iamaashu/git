#include<iostream>
using namespace std;
int arr[10],i,n,num,j,c=0;
int main()
{
    cout<<"\nEnter size of an array : ";
    cin>>n;
    cout<<"\nInsert elements in array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEnter number to be delete : ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            for(int j=i; j<(n-1); j++)
            {
                arr[j]=arr[j+1];
            }
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Element not found..!!";
    }
    else
    {
        cout<<"Element deleted successfully..!!\n";
        cout<<"Now the new array is :\n";
        for(i=0; i<(n-1); i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
