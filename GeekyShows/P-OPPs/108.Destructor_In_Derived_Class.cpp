#include<iostream>
using namespace std;
class A
{
    protected:
        int a,b;
    public:
        A(int i,int j)
        {
            a=i;
            b=j;
            cout<<"A initialized"<<endl;
        }
        ~A()
        {
            cout<<"\nDestructor in base class A"<<endl;
        }
};
class B
{
    protected:
        int c,d;
    public:
        B(int i,int j)
        {
            c=i;
            d=j;
            cout<<"\nB initialized"<<endl;
        }
        ~B()
        {
            cout<<"\nDestructor in base class B"<<endl;
        }
};
class C:public B,public A   //Or public B,virtual public A
{
    int e,f;
    public:
        C(int m,int n,int o,int p,int q,int r):A(m,n),B(o,p)
        {
            e=q;
            f=r;
            cout<<"C initialized";
        }
        ~C()
        {
            cout<<"\nDestructor in base class C"<<endl;
        }
        void display(void)
        {
            cout<<"\nThe value of a is:"<<a;
            cout<<"\nThe value of b is:"<<b;
            cout<<"\nThe value of c is:"<<c;
            cout<<"\nThe value of d is:"<<d;
            cout<<"\nThe value of e is:"<<e;
            cout<<"\nThe value of f is:"<<f;
        }
};
int main()
{
    C objc(10,20,30,40,50,60);
    objc.display();
    return 0;
}