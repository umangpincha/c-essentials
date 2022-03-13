#include<iostream>
#include<string>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int allAlphabetsPresentOrNot(string s) {
    
    int check[26] = {0};
    
    for (int i = 0; i < int(s.size()); i++) {
        check[int(s[i]-'a')]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (check[i] == 0) {
            return 0;
        }
    }
    
    return 1;
    
}
int main()
{
    string s;
    cin>>s;
    cout << allAlphabetsPresentOrNot(s);
    return 0;
}