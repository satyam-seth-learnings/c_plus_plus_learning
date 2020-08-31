#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int *p;
    int **p1;
    p=&a;
    p1=&p;
    cout<<"\nValue of a:"<<a;
    cout<<"\nValue of a using pointer p:"<<*p;
    cout<<"\nValue of a using pointer p1:"<<**p1;
    cout<<"\nAddress of a:"<<&a;
    cout<<"\nAddress of a using pointer p:"<<p;
    cout<<"\nAddress of a using pointer p1:"<<*p1;
    cout<<"\nAddress of ponter p:"<<&p;
    cout<<"\nAdd. of point. p a using pointer p1:"<<p1;
    cout<<"\nAdd. of point. **p1 using pointer p1:"<<&p1;
    return 0;
}