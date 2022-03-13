#include<iostream>
using namespace std;
void  selection_sort(int *arr,int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min_element_index=i;
        //find minimum 
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_element_index])
            {
                min_element_index=j;
            }
        }
        swap(arr[i],arr[min_element_index]);
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