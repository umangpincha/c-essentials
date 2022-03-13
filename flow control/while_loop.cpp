#include<iostream>
using namespace std;

int main()
{

	int n,num,sum=0,i=1;
	cin>>n;
	while(i<=n)
	{
	
		cin>>num;
		sum+=num;
		i++;
	}
	cout << sum;
	return 0;
}