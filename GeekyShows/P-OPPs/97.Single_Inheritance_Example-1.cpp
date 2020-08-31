#include<iostream>
using namespace std;
class A
{
    int m;
    public:
        void getdata_m(void);
        int retm(void);
};
class B:public A
{
    int n,sum;
    public:
        void getdata_n(void);
        int add(void);
        void display(void);
};
void A::getdata_m(void)
{
    cout<<"Enter value of M:";
    cin>>m;
}
int A::retm(void)
{
    return m;
}
void B::getdata_n(void)
{
    cout<<"Enter value of N:";
    cin>>n;
}
int B::add(void)
{
    sum=retm()+n;
    return (sum);
}
void B::display(void)
{
    cout<<"Value of M:"<<retm()<<endl;
    cout<<"Value of N:"<<n<<endl;
    cout<<"Sum:"<<sum<<endl;
}
int main()
{
    B num;
    num.getdata_m();
    num.getdata_n();
    num.add();
    num.display();
    return 0;
}