#include<iostream>
using namespace std;
int main()
{
    int a[]={5,16,67,88};
    int *p;
    p=&a[0];    //Or p=a;
    cout<<"Value:"<<*p;
    p++;    // increment to next address
    cout<<"\nValue:"<<*p;
    p--;    //  decrement to previous address
    cout<<"\nValue:"<<*p;
    return 0;
}