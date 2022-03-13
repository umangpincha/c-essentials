#include<iostream>
using namespace std;
int main()
{
    //Take input a letter,identify if it is
    // -whitespace
    // -letter 0-9
    // -Uppercase letter(A-Z) lowercase(a-z)
    // -special symbol (*,%,$ ...)

    char ch;
    ch=cin.get(); //reads the single char, that char can be whitespace  as well
    if (ch>='0' and ch<='9')
    {
        cout << "Digit" << endl;
    }
    else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout << "letter"; 
    }
    else if (ch == ' ' || ch=='\n')
    {
        cout << "Whitespace";
    }
    else
    {
        cout << "special character";
    }
    
    return 0;
}