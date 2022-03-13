#include<iostream>
using namespace std;

int strCompare(char* word1 , char* word2)
{
    int idx=0;
    while(word1[idx]!='\0' || word2[idx]!='\0')
    {
        if(word1[idx] < word2[idx])
        {
            return -1;
        }
        if(word1[idx] > word2[idx])
        {
            return 1;
        }
        idx++;
    }
    return 0;
}
int main()
{
    char word1[100];
    char word2[100];
    cin >> word1;
    cin>>word2;
    int result=strCompare(word1 , word2);
    if(result == 0)
        cout << "same string" << endl;
    else if(result > 0)
        cout << word1 << " appears after " << word2 << " in dictionary " << endl;
    else if(result < 0)
        cout << word2 << " appears after " << word1 << " in dictionary " << endl;
    return 0;
}