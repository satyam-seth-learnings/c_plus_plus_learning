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
        friend void operator-(complex &c);   // unary operator overloading
        void display()
        {
            cout<<"Real value:"<<real<<endl;
            cout<<"Imaginary value:"<<imaginary<<endl;
        }
};
void operator-(complex &c)
{
    c.real=-c.real;
    c.imaginary=-c.imaginary;
}
int main()
{
    complex c1(10,20);  //Or complex c1(10,20);
    cout<<"Real and Imaginary value before operation:"<<endl;
    c1.display();
    -c1;
    cout<<"Real and Imaginary value after operation:"<<endl;
    c1.display();
    return 0;
}