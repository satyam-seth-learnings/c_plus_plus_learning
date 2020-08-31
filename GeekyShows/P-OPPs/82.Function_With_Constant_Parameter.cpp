#include<iostream>
using namespace std;
void add(int);
int main()
{
    int a=5;
    add(a);
}
void add(const int x)   //Or    void add(int x)
{
    x=x+2;
    cout<<"Value:"<<x;
}