#include<iostream>
#include<string>
using namespace std;
void allAlphabetsPresentOrNot(string s) {
    
    int check[26] = {0};
    
     
    for (int i = 0; i < 26; i++) {
       cout << check[i] << " ";
    }
    for (int i = 0; i < int(s.size()); i++) {
        check[int(s[i]-'a')]++;
    }
   
    
    cout << endl;
    // return 1;
}

int main()
{
    string s;
    cin>>s;
    allAlphabetsPresentOrNot(s);
    return 0;
}