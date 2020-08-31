#include<iostream>
using namespace std;
int value(int);
double value(double);
char value(char);
double value(int,double);
int value(int,int);
int main()
{
    cout<<"\nInteger:"<<value(10);
    cout<<"\nDouble:"<<value(12.34);
    cout<<"\nChar:"<<value('a');
    cout<<"\nInteger+Double:"<<value(8,12.2);
    cout<<"\nInteger+Integer:"<<value(2,3);
    return 0;
}
int value(int x)
{
    return x;
}
double value(double y)
{
    return y;
}
char value(char z)
{
    return z;
}
double value(int m,double n)
{
    return (m+n);
}
int value(int a,int b)
{
    return (a+b);
}