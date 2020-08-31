#include<iostream>
using namespace std;
class A
{
    public:
        virtual void disp()=0;  // Pure Virtual Function
};
class B:public A
{
    public:
        void disp()  // Child class Function
        {
            cout<<"\nI am from Derived class B";
        }
};
class C:public A
{
    public:
        void disp()  // Child class Function
        {
            cout<<"\nI am from Derived class C";
        }
};
int main()
{
            //Or A obja;
    B objb;
    C objc;
    objb.disp();
    objc.disp();
    return 0;
}