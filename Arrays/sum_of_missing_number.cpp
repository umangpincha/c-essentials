#include <iostream>
using namespace std;

int missing_number(int* arr , int n)
{

	// method 1 [lead to overflow]
	// int total=(n+1)*(n+2)/2;
	// int sumElements=0;
	// for(int i=0;i<n;i++)
	// {
	// 	sumElements+=arr[i];
	// }
	// return(total-sumElements);

	// method 2 [wont lead to overflow]

	int i , total=1;
	for (int i = 2; i <= (n+1); i++)
	{
		total+=i;
		total-=arr[i-2];
	}
	return total;
}

int main()
{
	int n;
	int arr[100];
	cout << "Size of array:";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	int res = missing_number(arr,n);
	cout << res;
	return 0;
}