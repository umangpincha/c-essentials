#include<iostream>
using namespace std;

int** Create2dArray(int row , int col)
{
    int** arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    //init with some values
    int value=0;
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=value;
            value++;
        }
    }
     
    return arr;
}

int main(){
    int row,col;
    cin>>row>>col;
    int** arr=Create2dArray(row,col);
     for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}