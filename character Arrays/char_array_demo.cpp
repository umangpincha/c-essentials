#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char name[]{"umang"};
    char company[]="Coding Minutes";
    char intern_name[]={'a','b','c','d','e','f','\0'};
    cout << name << endl;
    // length of array
    cout << strlen(name)<<endl;
    cout << company<<endl;
    cout << intern_name << endl;
    return 0;
}