#include<iostream>
#include<vector>
using namespace std;


int  product(vector<vector<int>> v)
{
    int pro=1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
           pro*=v[i][j];
        }
    }
    cout << pro<<endl;
    if(pro > 0)
        return 1;
    else
        return 0;
}



int main()
{
 vector<vector<int>> v
{
        {1,2},
        {3,4},
        {2,3}
};
int res = product(v);
cout << res << endl;
return 0;
}
