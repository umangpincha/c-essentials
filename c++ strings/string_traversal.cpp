#include<iostream>
using namespace std;
int main(){

    string name="umang pincha";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    //for each loop
    for(char x : name)
        cout << x << " ";
    return 0;
}