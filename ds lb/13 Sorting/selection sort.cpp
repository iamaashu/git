#include<iostream>
using namespace std;
void selection(int arr[]);
int arr[10],n;
int main(void)
{
    int i;
    cout<<"\nHow many elements you want to sort :";
    cin>>n;
    cout<<"\nEnter value one by one : ";
    for(i=0; i<n; i++)
    {
        cout<<"\n Enter elements : ";
        cin>>arr[i];
    }
    cout<<"\nArray before sorting :";
    for(i=0; i<n; i++)
        cout<<"\t"<<arr[i];
    selection(arr);
    cout<<"\nArray after sorting :";
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<arr[i];
    }
}
void selection(int arr[])
{
    int i,j;
    int min,temp;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
