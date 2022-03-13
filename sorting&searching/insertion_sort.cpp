#include<iostream>
using namespace std;

void selection_sort(int *arr,int n)
{
    int j;
    for(int i=1;i<=n-1;i++)
    {
        int item=arr[i];
        //find the right index where the item can be inserted
        for(j=i-1;j>=0;j--)
        {
            if(arr[j] > item)
            {
                arr[j+1]=arr[j];
            }
        }
        arr[j+1]=item;
    }
}

void printArray(int *arr , int n)
{
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n , arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    selection_sort(arr,n);
    printArray(arr,n);
    return 0;
}