#include<iostream>
using namespace std;
int main()
{
	int unit , cost;
	cin>>unit;
	if(unit<=100)
	{
		cost=0;
	}
	else if(unit<=200)
	{
		cost = 0+(unit-100)*5;
	}
	else if(unit<=300)
	{
		cost= 0+100*5+(unit-200)*10;
	}
	else
	{
		cost = 0+100*5+100*10+(unit-300)*12;
	}

	cout << cost;
	return 0;
}