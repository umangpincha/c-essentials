#include<iostream>
#include<string>
using namespace std;

int canBeFormedOrNot(string s1, string s2) 
{
    int count=0;
    for(int i=0;i<s2.length();i++)
    {
        for(int j=0;j<s1.length();j++)
        {
            if(s1[j]==s2[i] && s1[j]!='%')
            {
                s1[j]='%';
                count++;
                break;
            }
        }
    }
    if(count==s2.length())
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    string s1 , s2;
    cin>>s1>>s2;
    cout << canBeFormedOrNot(s1,s2);
    return 0;
}