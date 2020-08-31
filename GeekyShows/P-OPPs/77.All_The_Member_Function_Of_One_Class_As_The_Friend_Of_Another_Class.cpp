#include<iostream>
using namespace std;
class dell;
class logitech
{
    int product;
    public:
        void getdata(void)
        {
            cout<<"Enter any number:";
            cin>>product;
        }
        friend dell;    //Or    friend class
};
class dell
{
    public:
        void lappy(logitech a)  //Or    accessing logitech class private data
        {
            cout<<"\nLaptop="<<a.product<<endl; //Or    product logitech private data
        }
        void keybo(logitech);
};
void dell::keybo(logitech m)
{
    cout<<"Keyboard="<<m.product<<endl;
}
int main()
{
    logitech x;
    dell y;
    x.getdata();
    y.lappy(x);
    y.keybo(x);
    return 0;
}