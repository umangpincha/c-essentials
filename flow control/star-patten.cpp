#include<iostream>
using namespace std;
int main()
{
	// n=3
	//i=1 --*  
	//i=2 -***
	//i=3 *****
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		//
		int spaces=n-i;
		while(spaces>0)
		{
			cout << " ";
			spaces-=1;
		}
		//star(2*i-1)
		int star=2*i-1;
		while(star>0)
		{
			cout<<"*";
			star-=1;
		}
		cout << endl;
	}
	return 0;
}