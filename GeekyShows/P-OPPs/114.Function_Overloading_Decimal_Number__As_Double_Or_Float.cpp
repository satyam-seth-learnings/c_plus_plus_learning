#include<iostream>
using namespace std;
void value(float);
void value(double);
int main()
{
    value(12.5);  //Or    value(12.5f);
    return 0;
}
void value(float x)
{
    cout<<"Float:"<<x;
}
void value(double y)
{
    cout<<"Double:"<<y;
}