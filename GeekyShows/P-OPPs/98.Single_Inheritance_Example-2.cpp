#include<iostream>
using namespace std;
class A
{
    int m;
    public:
        int n;
        void getdata_m_n(void);
        int retm(void);
};
class B:private A
{
    int sum;
    public:
        int add(void);
        void display(void);
};
void A::getdata_m_n(void)
{
    cout<<"Enter value of M:";
    cin>>m;
    cout<<"Enter value of N:";
    cin>>n;
}
int A::retm(void)
{
    return m;
}
int B::add(void)
{
    getdata_m_n();  //Or
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
            //Or    num.getdata_m_n();
    num.add();
    num.display();
    return 0;
}