#include<iostream>
using namespace std;

bool isSorted(int *arr , int n)
{
    //Base case
    if(n==1 or n==0)
    {
        return true;
    }

    if(arr[0]<arr[1] && isSorted(arr+1 , n-1))
    {
        return true;
    }
    return false;
    //recursive call
}


int main()
{
    int arr[4]={1,2,3,5};
    cout << isSorted(arr,5);
    return 0;
}