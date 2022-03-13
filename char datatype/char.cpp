#include<iostream>
using namespace std;
int main()
{
    char ch = 'A';
    cout << ch << endl;
    cout << (int)ch << endl;

    cout << "Letter: " << endl;
    for(int i=65;i<65+26;i++)
    {
        cout << i << "-" << (char)i << endl;
    }
    return 0;
}