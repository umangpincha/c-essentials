#include<iostream>
#include<cstring>
using namespace std;

char largestFreq(char* string , int size)
{
    int i,j;
    int freq[size];
    for(i = 0; i < size; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < size; j++) {  
            if(string[i] == string[j] && string[i] != '0') {  
                freq[i]++;          
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
    }
    
    int maxi=freq[0];
    char max_char;
    for(int i=0;i<size;i++)
    {
       if(freq[i] > maxi)
       {
           max_char=string[i];
       }
    }

   return max_char; 
} 
int main()
{
    char ch[1000]="abcdddabcccaaaff";
    int size=strlen(ch);
    char res =largestFreq(ch , size);
    cout << res << endl;
    return 0;
}