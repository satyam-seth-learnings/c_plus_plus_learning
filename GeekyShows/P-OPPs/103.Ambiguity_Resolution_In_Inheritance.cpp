#include<iostream>
using namespace std;
class A
{
    protected:
        int x=10;
    public:
        void display(void)
        {
            cout<<"x="<<x<<endl;
        }
};
class B
{
    protected:
        int y=20;
    public:
        void display(void)
        {
            cout<<"y="<<y<<endl;
        }
};
class P:public A,public B
{
    protected:
        int sum;
    public:
        void add(void)
        {
            sum=x+y;
            cout<<"Sum="<<sum<<endl;
        }
};
int main()
{
    P num;
    num.A::display();   //Or num.display();
    num.B::display();   //Or 
    num.add();
    return 0;
}