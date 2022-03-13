#include<iostream>
using namespace std;

bool passwordChecker(char* password , char* expected_password)
{
    int idx=0;
    while(password[idx]!='\0')
    {
        if(password[idx]!=expected_password[idx])
        {
            return false;
        }
        idx++;
    }
    return true;
}
int main()
{
    char expected_password[]="hack1010";
    char password[100];
    cin>>password;
    if(passwordChecker(password , expected_password))
    {
        cout << "Login Succesful" << endl;
    }
    else{
        cout << "try again" << endl;
    }
    return 0;
}