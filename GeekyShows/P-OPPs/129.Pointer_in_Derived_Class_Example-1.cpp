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
        void show()
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
    ptr->show();
                //Or B obj1;
                //Or ptr1=&obj1;
                //Or ptr->getdata(20);
                //Or ptr->disp();
}