#include<iostream>
using namespace std;
void value(char*);
void value(int);
int main()
{
    char st='a';
    value(st);
    return 0;
}
void value(int m)
{
    cout<<"Integer:"<<m;
}
void value(char *x)
{
    cout<<"Char:"<<*x;
}