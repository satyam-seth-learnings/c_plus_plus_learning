#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        A(int k)
        {
            a=k;
            cout<<"A initialized"<<endl;
        }
        void display_ab(void)
        {
            cout<<"\nThe value of a is:"<<a;
        }
};
class B
{
    protected:
        int c,d;
    public:
        B(int i,int j):c(i),d(j)    //Or c(i*2),d(j*c)  //Or c(d*i),d(j)    //  Initialization List
        {
            cout<<"B initialized"<<endl;
        }
        void display_cd(void)
        {
            cout<<"\nThe Value of c is:"<<c;
            cout<<"\nThe Value of d is:"<<d;
        }
};
class C:public B,public A
{
    int e,f;
    public:
        C(int n,int o,int p,int q,int r):A(n),B(o,p),e(q)
        {
            f=r;
            cout<<"C initialized";
        }
        void display(void)
        {
            cout<<"\nValue of e is:"<<e;
            cout<<"\nValue of f is:"<<f;
        }
};
int main()
{   
    C objc(10,20,30,40,50);
    objc.display_ab();
    objc.display_cd();
    objc.display();
    return 0;
}