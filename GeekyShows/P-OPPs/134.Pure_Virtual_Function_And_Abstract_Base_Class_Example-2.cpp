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
    A *pa;  // Base Class pointer
    B objb; // B Class object
    C objc; // C Class object
    pa=&objb;   // address of derived class B
    pa->disp(); // calling disp of class B
    pa=&objc;   // address of derived class C
    pa->disp(); // calling disp of class C
    return 0;
}