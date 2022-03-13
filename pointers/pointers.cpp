#include <iostream>
using namespace std;
int main()
{
	int x=10;
	cout << &x << endl;  //Address of x
	int* xptr=&x;
	cout << xptr << endl; //address of x
	cout<< &xptr << endl; // address of xptr
	int** xxptr = &xptr;
	cout << xxptr << endl; //addres of xptr

	//derefrencing
	cout << "*xptr: " <<*xptr << endl;
	cout << "**xxptr: " << *xxptr << endl; //address inside xptr

	//null pointer
	int* q=NULL;
	//segmentaion fault as q is null
	// cout << *q << endl;
	return 0;
}