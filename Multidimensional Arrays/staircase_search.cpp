#include<iostream>
using namespace std;


pair<int,int> search(int arr[][100] , int n , int m , int key)
{
    if(key<arr[0][0] and key>arr[n-1][m-1])
    {
        return {-1,-1};
    }       

           //j    
      // 0  1  2
   //i//0 {1,2,3},
   //i//1 {5,6,7},
      //2 {8,9,10}
    int i=0 , j=m-1;
    while(i<n and j>=0)
    {
        if (arr[i][j] == key)
        {
            return {i,j};
        }
        else if(arr[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {-1,-1};

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
int key;
cout << "Enter Key:";
cin>>key;
pair<int,int> corr = search(arr,n,m,key);
cout << corr.first << " " << corr.second;
return 0;
}