#include<iostream>
#include<string>
using namespace std;
//if palindrome return 1 else 0
int isPalindrome(string s)
{
    int start=0;
    int end=s.length()-1;
    while(start < end)
    {
        if(s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cin>>s;
    cout << isPalindrome(s);
    return 0;
}