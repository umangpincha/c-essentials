#include<iostream>
#include<vector>
using namespace std;

int sum_below_diag( vector<vector<int>> matrix)
{
    int sum=0;
    for(int i=1;i<matrix.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> matrix;
    int row,col,num;
    cout << "enter row: ";
    cin>> row;
    
    cout << "enter column: ";
    cin>> col;

    for(int i=0;i<row;i++)
    {
        vector<int> v1;
        for(int j=0;j<col;j++)
        {
            cin>> num;
            v1.push_back(num);
        }
        matrix.push_back(v1);
    }

    cout << sum_below_diag(matrix);
}