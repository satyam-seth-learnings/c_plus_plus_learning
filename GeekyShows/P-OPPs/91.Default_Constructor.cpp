#include<iostream>
using namespace std;
class student
{
    int id;
    public:
        student()
        {
            id=10;
            cout<<"ID:"<<id<<endl;
        }
};
int main()
{
    student stu;
    return 0;
}