#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,j,k,temp;
    cout<<"\n Enter the elements :";
    for(i=0; i<=4; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArray before sorting : ";
    for(i=0; i<=4; i++)
    {
        cout<<"\t"<<arr[i];
    }
    for(i=1; i<=4; i++)
    {
        for(j=0; j<i; j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                for(k=i; k>j; k--)
                {
                    arr[k]=arr[k-1];
                }
                arr[k+1]=temp;
            }
        }
    }
    cout<<"\n Array after sorting :";
    for(i=0; i<=4; i++)
    {
        cout<<"\t"<<arr[i];
    }
}
