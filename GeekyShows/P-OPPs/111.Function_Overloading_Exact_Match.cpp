#include<iostream>
using namespace std;
void value(int);
void value(char);
int main()
{
    value(10);  //Or    value('a');
    return 0;
}
void value(int x)
{
    cout<<"Integer:"<<x;
}
void value(char m)
{
    cout<<"Char:"<<m;
}