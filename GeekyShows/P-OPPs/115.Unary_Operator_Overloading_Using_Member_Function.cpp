#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
    public:
        complex(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void operator-();   // unary operator overloading
        void display()
        {
            cout<<"Real value:"<<real<<endl;
            cout<<"Imaginary value:"<<imaginary<<endl;
        }
};
void complex::operator-()    // unary operator overloading
{
    real=-real;
    imaginary=-imaginary;
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