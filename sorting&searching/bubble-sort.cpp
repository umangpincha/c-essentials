#include<iostream>
using namespace std;

void bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    
    bubble_sort(arr,n);
    printArray(arr,n);
    return 0;
}