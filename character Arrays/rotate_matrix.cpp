#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>> arr)
{
    int n=arr.size();
 for(int i=0;i<n/2;i++) 
  { 
    for (int j=i;j<n-i-1;j++) 
    { 
        // Swapping elements after each iteration in Clockwise direction
            int temp=arr[i][j]; 
            arr[i][j]=arr[n-1-j][i]; 
            arr[n-1-j][i]=arr[n-1-i][n-1-j]; 
            arr[n-1-i][n-1-j]=arr[j][n-1-i]; 
            arr[j][n-1-i]=temp; 
    } 
  }

 //printing rotated array
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<arr[i].size();j++)
      {
          cout << arr[i][j] << " ";
      }
      cout << endl;
  }
}

int main()
{
    vector<vector<int>> v;
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
        v.push_back(v1);
    }

    rotateMatrix(v);
    return 0;
}