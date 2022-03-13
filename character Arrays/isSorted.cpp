#include<iostream>
#include<cstring>
using namespace std;

int  isSorted(char* ch , int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(ch[i]>ch[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    char ch[]="aadbcch";
    int size = strlen(ch);
    int res = isSorted(ch , size);
    cout << res << endl;
    return 0;
}