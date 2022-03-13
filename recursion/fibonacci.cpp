#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 or n==1)
    {
        return n;
    }
    int fib1=fib(n-1);
    int fib2=fib(n-2);
    return fib1+fib2;
}

int main(){

    int n;
    cin>>n;
    cout << fib(n);
    return 0;
}