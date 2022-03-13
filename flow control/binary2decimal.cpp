#include <iostream>
#include<math.h>
using namespace std;


int binary2Decimal(int n)
{
          // 2^2  2^1  2^0
	//n = 1    1    0     = 4+2=6

	int rem , ans=0 , i=0;
	while(n>0)
	{
		rem=n%10; //1 1
		if(rem!=0)
		{
		 ans+=pow(2,i);    //0+2=2 + 4=6
		}
		i+=1;   //1 2 3
		n/=10;  //11 1 0
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout << binary2Decimal(n);
	return 0;
}