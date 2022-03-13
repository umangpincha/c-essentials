#include <iostream>
#include<math.h>
using namespace std;


int Decimal2binary(int n)
{
    //2->10
	int num,rem,i=0,ans=0;
	while(n>0)
	{
		num= n/2; 
		rem= n%2; 
		ans=ans + (rem*pow(10,i));
		i+=1;
		n/=2;
	}
	return ans;

}
int main()
{
	int n;
	cin>>n;
	cout << Decimal2binary(n);
	return 0;
}