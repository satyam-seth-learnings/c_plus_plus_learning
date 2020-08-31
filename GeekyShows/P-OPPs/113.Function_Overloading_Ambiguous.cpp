#include<iostream>
using namespace std;
void value(unsigned int);
void value(float);
int main()
{
    value(32);  //Or    value(32.6f);
    return 0;
}
void value(float m)
{
    cout<<"float:"<<m;
}
void value(unsigned int x)
{
    cout<<"unsigned int:"<<x;
}