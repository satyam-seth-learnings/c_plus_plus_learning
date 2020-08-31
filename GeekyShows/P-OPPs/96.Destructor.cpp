#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
        char name[20],add[20];
        int roll,zip;
    public:
        student();  //  Constructor
        ~student();  //  Destructor
        void read();
        void disp();
};
student::student()
{
    cout<<"\nStudent Details:"<<endl;
}
void student::read()
{
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Student Roll No:";
    cin>>roll;
    cout<<"Enter Student Address:";
    cin>>add;
    cout<<"Enter Pincode:";
    cin>>zip;
}
void student::disp()
{
    cout<<endl<<"Student Name:"<<name<<endl;
    cout<<"Roll no:"<<roll<<endl;
    cout<<"Address:"<<add<<endl;
    cout<<"zipcode:"<<zip;
}
student::~student()
{
    cout<<"\n\nStudent Detail is closed and related object desteoyed.";
}
int main()
{
    {
        student s1;
        s1.read();
        s1.disp();
    }
    getch();
    student s2;
    s2.read();
    s2.disp();
    getch();
    return 0;
}
