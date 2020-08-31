#include<iostream>
using namespace std;
class student
{
    public:
        student(int,int);
};
student::student(int a,int b)
{
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b<<endl;
}
int main()
{
    student stu=student(10,145);    //  explicitily call
    //Or student stu(10,145);   //  implicit call
    return 0;
}