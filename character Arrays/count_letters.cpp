#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//count digit , alphabet , space , specialcharacter in string
int main()
{
    char str[100];
    int isdig=0,isal=0,space=0,specialchar=0;
    cin.getline(str , 100 , '$');
    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
            isdig++;
        }
        else if (isalpha(str[i]))
        {   
            isal++;
        }
        else if(isspace(str[i]))
        {
            space++;
        }
        else
        {
            specialchar++;
        }
    }
    cout << "Digit: " << isdig << endl;
    cout << "Alphabet: " << isal << endl;
    cout << "Space: " << space << endl;
    cout << "Special character: " << specialchar << endl;

    return 0;
}