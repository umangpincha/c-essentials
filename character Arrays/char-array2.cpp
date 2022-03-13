#include<iostream>
#include<cstring>
using namespace std;
int main(){

    // char name[100];
    // cin>>name;//dont take white space
    // cin.getline(name,100,'.');
    // cout<<name<<endl;;

    // char name2[100];
    // strcpy(name2,"Umang Pincha");
    // cout<<name2<<endl;
    // strcpy(name2 , "Hi!");
    // strcat(name2 , "How are u?");
    // cout << name2 << endl;

    //strcmp
    char str1[]="a";
    char str2[]="b";
    cout << strcmp(str1 , str2) << endl;

    char sentence[100]="I love reading books";
    char word[100];
    cin>>word;
    // cout << strstr(sentence,word);
    char* output =  strstr(sentence,word);
    if(output==NULL){
        cout << word << "is not found" << endl;
    }
    else
    {
         cout << word << "is  found" << endl;
    }
    return 0;
}