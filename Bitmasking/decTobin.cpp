#include<iostream>
using namespace std;

//Fast exponentiation(a^n)
int decToBin(int n)
{
    int ans = 0 , power=1;
    while (n>0)
    {
        int last_bit=n&1;
        if(last_bit)
        {
            ans = ans+power;
        }
        power=power*10;
        n=n>>1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout << decToBin(n);
    return 0;
}


