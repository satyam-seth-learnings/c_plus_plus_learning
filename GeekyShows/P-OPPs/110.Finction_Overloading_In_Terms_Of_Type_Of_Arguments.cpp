#include<iostream>
using namespace std;
int value(int);
int value(int,int);
int value(int,int,int);
int main()
{
    cout<<"\nInteger:"<<value(10);
    cout<<"\nInteger+Integer:"<<value(20,30);
    cout<<"\nInt+Int+Int:"<<value(40,50,60);
    return 0;
}
int value(int m)
{
    return m;
}
int value(int a,int b)
{
    return (a+b);
}
int value(int x,int y,int z)
{
    return (x+y+z);
}