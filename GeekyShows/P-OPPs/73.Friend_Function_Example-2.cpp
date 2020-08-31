#include<iostream>
using namespace std;
class Sum
{
    int a,b;
    friend int add(void);
};
int add(void)
{
    Sum s;
    int temp;
    s.a=10;
    s.b=20;
    temp=s.a+s.b;
    return temp;
}
int main()
{
    int result;
    result=add();
    cout<<"Sum="<<result<<endl;
    return 0;
}