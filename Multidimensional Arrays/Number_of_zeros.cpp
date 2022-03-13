#include<iostream>
#include<vector>
using namespace std;


int countZeros(vector<vector<int>> v )
{
    // cout << v.size()<<endl;
    int count = 0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
 vector<vector<int>> v
{
        {1,0,0,0,0},
        {1,1,1,1,1},
        {0,0,0,0,0}
};
int res = countZeros(v);
cout << res;
return 0;
}
