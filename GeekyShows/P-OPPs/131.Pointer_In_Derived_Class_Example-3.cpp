#include<iostream>
using namespace std;
class A
{
    int m;
    public:
        int n=20;
        void getdata(int x)
        {
            m=x;
        }
        void disp()
        {
            cout<<"Base class Output:\n";
            cout<<"Value of m="<<m<<endl;
            cout<<"Value of n="<<n<<endl;
        }
};
class B:public A
{
    int p;
    public:
        void getdata(int y)
        {
            p=y;
        }
        void disp()
        {
            cout<<"Derived class Output:\n";
            cout<<"Value of p="<<p<<endl;
        }
};
int main()
{
    A obj;
    A *ptr;
    ptr=&obj;
    ptr->getdata(10);
    ptr->disp();
                    //Or    B obj1;
                    //Or    B *ptr1;
                    //Or    ptr1=&obj1;
                    //Or    ptr1->getdata(40);
                    //Or    ptr1->disp();
}