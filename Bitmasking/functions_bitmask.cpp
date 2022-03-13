#include<iostream>
using namespace std;

int getIthBit(int n,int i)
{
    int mask = (1<<i);
    return(n&mask) > 0 ? 1:0;
}

void setIthBit(int &n , int i)
{
    int mask=(1<<i);
    n=n | mask;
}

void clearIthBit(int &n , int i)
{
    int mask=~(1<<i);
    n=n&mask;
}


void updateBit(int &n , int i , int value)
{
    // update->clear+set
    clearIthBit(n , i);
    int mask=(value<<i);
    n=n|mask;
}  

void clearlastithBit(int &n , int i)
{
    int mask=~0<<i;
    n=n&mask;
}

void clearBitInRange(int &n,int i,int j)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
}


// Example:
// n:10000000000
// m=10101
// i=2 , j=6
// Output:10001010100
void replaceBits(int &n , int i , int j , int m)
{
    clearBitInRange(n,i,j);
    int mask=m<<i;
    n=n|mask;
}


bool ispowerofTwo(int n)
{
    if((n & (n-1))==0)
        return true;
    
    return false;
}

int countSetBits(int n)
{
    int count=0;
    while(n>0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int n,i,value,j,m;
    cin>>n;
    // cin>>i;
    // cin>>j;
    // cin>>m;
    // cin>>value;
    // cout << getIthBit(n,i);
    // setIthBit(n,i);
    // clearIthBit(n,i);

    // updateBit(n,i,value);
    // clearlastithBit(n,i);
    // cout << n;
    // clearBitInRange(n,i,j);
    // replaceBits(n,i,j,m);
    // cout << n;
    // cout << ispowerofTwo(n);
    cout << countSetBits(n);
    return 0;
}