#include <iostream>
using namespace std;
void func(int &n)
{
	n+=100;
}
int main()
{
	int n;
	cin>>n;
	func(n);
	cout << n;
	return 0;
}