#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char ch;
    ch=cin.get();
    //conversion
    // ch=toupper(ch);
    // cout<<ch;

    //testing
    if(isupper(ch))
        cout << "Upper" << endl;
    else if(islower(ch))
    {
        cout << "Lower" << endl;
    }
    else if(isdigit(ch))
    {
        cout << "digit" << endl;
    }
    return 0;
}