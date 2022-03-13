#include <bits/stdc++.h>
using namespace std;

int frequency_element(vector<int> v)
{
   int size=v.size()-1; 
   int largest=v[size];
   int count = 0;
   while(v[size] == largest)
   {
       count+=1; 
       size-=1;
   }
   return count;
}

int main()
{

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int res = frequency_element(v);
    cout << res;
    return 0;
}