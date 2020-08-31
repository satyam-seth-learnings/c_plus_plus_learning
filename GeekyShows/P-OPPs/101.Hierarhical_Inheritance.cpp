#include<iostream>
using namespace std;
class Number
{
    protected:
        int m,n;
    public:
        void getnum(void)
        {
            cout<<"Enter any Number:";
            cin>>m;
            cout<<"Enter any Number:";
            cin>>n;
        }
};
class Addition:public Number
{
    public:
        void add(void)
        {
            cout<<"******Addition******"<<endl;
            getnum();
            cout<<"Addition:"<<m+n<<endl<<endl;
        }
};
class Subtraction:public Number
{
    public:
        void sub(void)
        {
            cout<<"******Substraction******"<<endl;
            getnum();
            cout<<"Substraction:"<<m-n<<endl<<endl;
        }
};
int main()
{
    Addition a;
    Subtraction s;
    a.add();
    s.sub();
    return 0;
}