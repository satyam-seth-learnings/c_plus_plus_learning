#include<iostream>
using namespace std;
class student
{
    private:
        int id;
        int roll;
    public:
        student()
        {
            id=10;
            roll=145;
            cout<<"ID:"<<id<<endl;
            cout<<"Roll:"<<roll<<endl;
        }
};
int main()
{
    student stu;
}