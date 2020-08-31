#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
    public:
        void get_x(void);
};
class B
{
    protected:
        int y;
    public:
        void get_y(void);
};
class C:public A,public B
{
    int sum;
    public:
        void add(void);
        void disp(void);
};
void A::get_x(void)
{
    cout<<"Enter value of X:";
    cin>>x;
}
void B::get_y(void)
{
    cout<<"Enter value of Y:";
    cin>>y;
}
void C::add(void)
{
    sum=x+y;
}
void C::disp(void)
{
    cout<<"Value of X:"<<x<<endl;
    cout<<"Value of Y:"<<y<<endl;
    cout<<"Sum:"<<sum<<endl;
}
int main()
{
    C num;
    num.get_x();
    num.get_y();
    num.add();
    num.disp();
    return 0;
}