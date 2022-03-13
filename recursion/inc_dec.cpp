#include<iostream>
using namespace std;

void printAsc(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //recursive case
    printAsc(n-1);
    cout << n << " ";
}

void printDesc(int n)
{
    //Base Case
    if(n==0)
    {
       return;
    }
    cout << n << " ";
    //recursive case                
    printDesc(n-1);   
}


int main()
{
    printAsc(5);
    cout << endl;
    printDesc(5);
    return 0;
}