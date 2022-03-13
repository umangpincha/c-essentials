#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;

	// ABCDEEDCBA
	// ABCDDCBA
	// ABCCBA
	// ABBA
	// AA
	for(int i=1;i<=n;i++)
	{
		char ch='A';
		for(int j=1;j<=n-i+1;j++)
		{
			cout << ch++;
		}
		ch-=1; //resetiing the value of previous printed letter
		for(int j=1;j<=n-i+1;j++)
		{
			cout << ch--;
		}
		cout << endl;	
	}
	
	return 0;
}