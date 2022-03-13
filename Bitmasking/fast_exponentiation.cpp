#include<iostream>
using namespace std;

//Fast exponentiation(a^n)
int fastExpo(int a , int n)
{
    int ans=1 , i=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans*=a;
        }
        a*=a;
        n=n>>1;
    }
    return ans;
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout << fastExpo(a,n);
    return 0;
}


