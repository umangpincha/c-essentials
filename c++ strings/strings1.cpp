#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "hello";
    //more safe as it will throw an error
    // cout << s.at(8) << endl;
    char s2[]="hello";
    //unsafe code
    cout << s[8] << endl;

    //various ways of initialisation
    string s3="umo";
    string s4{"hello"};
    string s5{s4};
    string s6{"hello" , 3}; //hel
    string s7{s4,0,2}; //he
    string s8(8 , 'h'); //hhhhhhhh
    string s9(10 , 65); //ascii 65 is A , so a is repeated 10 times AAAAAAAAAA

    string  s10="hello";
    //concatination
    string s11= s10 + "byebyebye";

    cout <<"s3: " <<  s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s8 << endl;
    cout << s9 << endl;
    cout << s10 << endl;
    s10="bye";
    cout << s10 << endl;
    cout << s11 << endl;
    return 0;
}