#include<iostream>
#include<vector>
using namespace std;

int singly_present(vector<int> v)
{
    int res=0;
    for(int i=0;i<v.size();i++)
    {
        res=res^v[i];
    }
    return res;
}
int main(){
    vector<int> v{4,4,4,4,5};
    cout << singly_present(v);
    return 0;
}