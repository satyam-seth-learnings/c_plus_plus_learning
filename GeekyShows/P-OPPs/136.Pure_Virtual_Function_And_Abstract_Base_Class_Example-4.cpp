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
    A *pa[2];  // Base Class pointer array
    B objb; // B Class object
    C objc; // C Class object
    pa[0]=&objb;   // address of derived class B
    pa[1]=&objc;   // address of derived class C
    (pa[0])->disp(); // calling disp of class B
    (pa[1])->disp(); // calling disp of class C
    return 0;
}