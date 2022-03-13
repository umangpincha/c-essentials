#include<iostream>
using namespace std;

string uncomment(string s)
{
    int idx1=s.find("/*");
    int idx2=s.find("*/");
    int start=idx1+2;
    int length = idx2-start;
    return s.substr(start , length);
}
int main(){

    string s="   /*Hello World*/";
    cout << uncomment(s);
    return 0;
}