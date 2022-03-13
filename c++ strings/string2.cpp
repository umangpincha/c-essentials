#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    //cin>>str; //will not work with string containing spaces
    // getline(cin,str);

    string str1 , str2;
    cin>>str1>>str2;
    if(str1 == str2)
        cout << "Both are equal" <<endl;
        
    else if(str1 > str2)
        cout << str1 << " comes after " << str2 <<endl;
    else if(str1 < str2)
        cout << str1 << " comes before " << str2 <<endl;
    return 0;
}