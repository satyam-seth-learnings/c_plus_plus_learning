#include<iostream>
using namespace std;
class student
{
    int roll;
    int mark;
    public:
        student(int m,int n)
        {
            roll=m;
            mark=n;
        }
        student(student &t);    //  copy constructor
        void show_data()
        {
            cout<<"\nRoll No.:"<<roll;
            cout<<"\nMarks:"<<mark;
        }
};
student::student(student &t)    //  copy costructor
{
    roll=t.roll;    //Or    roll=30;
    mark=t.mark;
}
int main()
{
    cout<<"\nParametrized constructor outputr\n";
    student r(60,30);   //  Parameterized constructor
    r.show_data();  //  Parameterized constructor output
    cout<<"\nCopy constructor output stu(r)\n";
    student stu(r); //  Copy constructor
    stu.show_data();    //  copy constructor output
    return 0;
}