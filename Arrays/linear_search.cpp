#include <iostream>
using namespace std;

int linear_search(int* arr , int n , int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n ,key, arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter Key: ";
	cin>>key;
	int res = linear_search(arr,n,key);
	if(res!=-1)
		cout << "Found at: " << res << endl;
	else
		cout << "Not found"<<endl;
	return 0;
}