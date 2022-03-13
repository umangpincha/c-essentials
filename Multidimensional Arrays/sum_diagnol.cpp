#include<iostream>
#include<vector>
using namespace std;

int sumDiagnol(vector<vector<int>> v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(i==j)
            {
                sum+=v[i][j];      
            }
        }
    }
    return sum;
}

int main()
{

vector<vector<int>> v
{
        {1,2,3},
        {0,0,0},
        {1,1,1}
};
int res = sumDiagnol(v);
cout << res;
return 0;
}