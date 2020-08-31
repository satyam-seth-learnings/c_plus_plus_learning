#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
    public:
        complex()
        {
        }
        complex(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        friend void operator+(complex c,complex d);
};
void operator+(complex c,complex d)
{
    complex temp;
    temp.real=c.real+d.real;
    temp.imaginary=c.imaginary+d.imaginary;
    cout<<"Real sum is:"<<temp.real<<endl;
    cout<<"Imaginary sum is:"<<temp.imaginary<<endl;
}
int main()
{
    complex c1(10,20);
    complex d1(20,30);
    c1+d1;
    return 0;
}