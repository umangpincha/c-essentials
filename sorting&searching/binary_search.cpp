#include<iostream>
using namespace std;
int binary_search(int *arr,int n , int key)
{ 
    //TC -> O(log n)
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid] > key)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    int n , arr[100],key;
    cin>>n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cin>>key;
    int res = binary_search(arr,n,key);
    if(res!=-1)
        cout << "Found At Index: " << res << endl;
    else
        cout << "Not Found"<<endl;
    return 0;
}