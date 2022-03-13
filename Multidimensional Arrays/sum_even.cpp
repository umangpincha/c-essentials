#include<iostream>
using namespace std;


int  Sumeven(int arr[][1000] , int n , int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
                sum+=arr[i][j];
        }
    }
    return sum;
}


int main()
{
int arr[1000][1000],n,m;
cout << "Enter rows & columns: "<<endl;
cin>>n>>m;
for (int i = 0; i < n; i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
cout << Sumeven(arr,n,m);
}