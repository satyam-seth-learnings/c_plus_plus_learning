#include<iostream>
using namespace std;
class Laptop
{
    int Ram;
    public:
        int  usb;
        void getdata(int a)
        {
            Ram=a;
        }
        void disp()
        {
            cout<<"RAM:"<<Ram<<endl;
            cout<<"USB:"<<usb<<endl;
        }
};
int main()
{
    Laptop dell;
    Laptop *pdell;
    pdell=&dell;
    pdell->usb=3;   //Or (*pdell).usb=3;
    pdell->getdata(20);   //Or (*pdell).getdata(20);
    pdell->disp();   //Or (*pdell).disp();
    return 0;
}