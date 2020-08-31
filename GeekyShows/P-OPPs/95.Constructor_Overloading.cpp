#include<iostream>
using namespace std;
class student
{
    int roll;
    int mark;
    public:
        student();
        student(int);
        student(int,int);
        void show(void);
};
student::student()
{
    roll=3;
    mark=3;
}
student::student(int a)
{
    roll=mark=a;
}
student::student(int x,int y)
{
    roll=x;
    mark=y;
}
void student::show(void)
{
    cout<<"Roll:"<<roll<<endl;
    cout<<"Marks:"<<mark<<endl;
}
int main()
{
    student stu;    //Or    student stu,stu1,stu2;
    student stu1(6);    //Or    stu1=student(6);
    student stu2(3,4);  //Or    stu2=student(3,4);
    stu.show();
    cout<<"\nOne Argument \n";
    stu1.show();
    cout<<"\nTwo Argument \n";
    stu2.show();
    return 0;
}