#include<iostream>
using namespace std;
class student
{
    private:
        int id;
        int roll;
    public:
        student();  //  Constructor declared
};
student::student()  //  constructor definition outside class
{
    id=10;
    roll=145;
    cout<<"ID:"<<id<<endl;
    cout<<"Roll:"<<roll<<endl;
}
int main()
{
    student stu;
}