#include<iostream>
using namespace std;
int main()
{
	// n=123 , rev=0
	// rev:3->0*10+3=3
	// rev:2->3*10+2=32
	// rev:1->32*10+1=321
	int n,rev=0;
	cin>>n;
	while(n>0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	cout << "reversed Number: " << rev;
	return 0;
}