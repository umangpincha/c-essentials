#include<iostream>
using namespace std;


void spiralPrint(int arr[][100],int n,int m)
{
    int startRow=0,startColumn=0 ,endColumn=m-1 , endRow=n-1;
    while(startColumn<=endColumn and startRow<=endRow){
        //start row
        for(int col=startColumn;col<=endColumn;col++)
        {
            cout << arr[startRow][col] << " ";
        }

        //end col
        for(int row=startRow+1;row<=endRow;row++)
        {
            cout << arr[row][endColumn] << " ";
        }

        //end row
        for(int col=endColumn-1;col>=startColumn;col--)
        {
            //Avoid duplicate printing of elements
            if(startRow==endRow)
            {
                break; 
            }
            cout << arr[endRow][col] << " ";
        }

        //first col
        for(int row=endRow-1;row>=startRow+1;row--)
        {
            //Avoid duplicate printing of elements
            if(startColumn==endColumn)
            {
                break;
            }
            cout << arr[row][startColumn] << " ";
        }

        //update the variables to point to inner spiral
        startRow++;
        endRow--;
        startColumn++;
        endColumn--;
    }
    
}


int main()
{
int arr[1000][100],n,m;
cin>>n>>m;
for (int i = 0; i < n; i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
spiralPrint(arr,n,m);
return 0;
}