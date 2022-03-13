#include<iostream>
using namespace std;

int sumDigits(int n)
{
    //base case
    if(n==0)
    {
        return 0;
    }
    int rem=n%10;
    return rem + sumDigits(n/10);
}


int main()
{
    cout << sumDigits(12);
    return 0;
}