#include<iostream>
using namespace std;
int main(){

//		      1
//			2 3 2
//		  3 4 5 4 3
//		4 5 6 7 6 5 4
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{ 
		//space
		for(int j=1;j<=n-i;j++)
		{
			cout << " ";
		}
		//first triangle
		int value=i;
		for(int j=1;j<=i;j++)
		{
			cout << value;
			value+=1;
		}

		//second triangle
		value-=2;
		for(int j=1;j<=i-1;j++)
		{
			cout << value;
			value-=1;
		}
		cout << endl;
	}
	return 0;
}