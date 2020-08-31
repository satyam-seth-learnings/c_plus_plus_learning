#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;
class student
{
    int roll;
    char name[20];
    public:
        void getdata(void);
        void display(void);
};
void student::getdata(void)
{
    cout<<"\nEnter Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
}
void student::display(void)
{
    cout<<"\nName:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Press Enetr to continue...."<<endl;
    getch();
}
int main()
{
    student st[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        cout<<"\nEnter Details of Student:"<<i+1;
        st[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<"\nDetails of Student:"<<i+1;
        st[i].display();
    }
    return 0;
}