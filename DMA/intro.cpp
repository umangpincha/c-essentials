#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //creating memory in heap
    int *arr=new int[n];
    cout << arr<< endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout << arr[i] << " ";
    }
    //delete memory from heap but arr will 
    //stays in stack memory 
    delete [] arr;
    cout << arr<< endl; 
    return 0;
}