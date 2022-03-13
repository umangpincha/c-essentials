#include <iostream>
using namespace std;

int median_sorted_array(int* arr , int n)
{
	if(n%2==0)
	{
		int num1=(n/2);
		int num2=num1-1;
		int res=(arr[num1]+arr[num2])/2;
		return res;
	}
	else
	{
		return arr[n/2];
	}

	return 	0;
}

int main()
{
	int n;
	int arr[100];
	cout << "Size of array:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	int res = median_sorted_array(arr,n);
	cout << res;
	return 0;
}