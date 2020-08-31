// Page-132
#include<iostream>
using namespace std;
class student
{
    public:
        student()
        {
        }
        student(int,int);
};
student::student(int a,int b)
{
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b<<endl;
}
int main()
{
    student std1,std2;
    student stu=student(10,145);
}