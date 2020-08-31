#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        A(int i)
        {
            a=i;
            cout<<"\nA initialized";
        }
};
class B:public A
{
    protected:
        int b;
    public:
        B(int x,int y):A(x)
        {
            b=y;
            cout<<"\nB initialized";
        }
};
class C:public B
{
    protected:
        int c;
    public:
        C(int m,int n,int o):B(m,n)
        {
            c=o;
            cout<<"\nC initialized";
        }
        void disp(void)
        {
            cout<<"\nValue of A:"<<a<<endl;
            cout<<"\nValue of B:"<<b<<endl;
            cout<<"\nValue of C:"<<c<<endl;
        }
};
int main()
{   
    C objc(10,20,30);
    objc.disp();
    return 0;
}