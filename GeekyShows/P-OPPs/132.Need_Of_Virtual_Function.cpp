// Need of virtual function
#include<iostream>
using namespace std;
class A
{
    public:
        void disp() //Or virtual void disp() // Parent class function
        {
            cout<<"\nI am from Base Class A";
        }
};
class B:public A
{
    public:
        void disp() // child class
        {
            cout<<"\nI am from Derived Class B";
        }
};
class C:public A
{
    public:
        void disp() // child class Function
        {
            cout<<"\nI am from Derived Class C";
        }
};
int main()
{
    A *pa;  // Base class Pointer
    B objb;  // B class object
    C objc;  // C class object
    pa=&objb;   // address of derived class B
    pa->disp(); // calling disp of class B
    pa=&objc;   // address of derived class C
    pa->disp(); // calling disp of class C
    return 0;
}