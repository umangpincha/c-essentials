#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0;
    char ch=cin.get();
    while(ch!='\n')
    {
        switch (ch)
        {
        case 'E':x++;break;
        case 'W':x--;break;
        case 'N':y++;break;
        case 'S':y--;break;
        default:break;
        }
        ch=cin.get();
    }
    // Q1 (North - East)
    if(x>=0 && y>=0)
    {
        for(int cnt=1;cnt<=x;cnt++)
        {
            cout << "E";
        }
        
        for(int cnt=1;cnt<=y;cnt++)
        {
            cout << "N";
        }
    }
    //Q2(North - West)
    if(x<0 && y>0 )
    {
        for(int cnt=1;cnt<=x;cnt++)
        {
            cout << "N";
        }
        for(int cnt=-1;cnt<=y;cnt-=1)
        {
            cout << "W";
        }
    }

    // Q3(West - South)
    if(x<=0 && y<=0)
    {
        for(int cnt=-1;cnt<=x;cnt-=1)
        {
            cout << "W";
        }
        
        for(int cnt=-1;cnt<=y;cnt-=1)
        {
            cout << "S";
        }
    }

    //Q4(South - east)
    if(x>=0 && y<=0)
    {
        for(int cnt=1;cnt<=x;cnt++)
        {
            cout << "E";
        }
        for(int cnt=-1;cnt<=y;cnt-=1)
        {
            cout << "S";
        }
    }

    return 0;
}