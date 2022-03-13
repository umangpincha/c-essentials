#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="My name is Umang , Hi Umang";
    string word;
    cout << "enter string: ";
    getline(cin,word);
    //find function
        // int index = str.find(word);
        // if(index!=-1)
        // {
        //     cout << "first index " << index << endl ;
        // }

        // index=str.find(word , index+1);
        // if(index!=-1)
        // {
        //     cout << "Second occurance " << index;
        // }

    //all occurances of given string
    int index=str.find(word);
    if(index!=-1)
    {
        while(index<str.length())
        {
            if(index!=-1)
                cout << index << endl;
            index=str.find(word , index+1);
        }
    }
    else
    {
        cout << "Word not exist"<<endl;
    }
    
    return 0;
}