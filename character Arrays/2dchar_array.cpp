#include<iostream>
using namespace std;
int main()
{
    char numbers[][10]{
        "one",
        "two",
        "three",
        "four",
        "five"
    };
    for(int i=0;i<5;i++)
    {
        cout << numbers[i] << endl; 
    } 
}