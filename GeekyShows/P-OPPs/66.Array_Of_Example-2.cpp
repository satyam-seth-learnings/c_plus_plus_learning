#include<iostream>
#include<conio.h>
using namespace std;
class company
{
    char id[10];
    char name[20];
    char dep[20];
    public:
        void getdata(void);
        void display(void);
};
void company::getdata(void)
{
    cout<<"\nEnter Name:";
    cin>>name;
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter Department:";
    cin>>dep;
}
void company::display(void)
{
    cout<<"\nID No.:"<<id<<endl;
    cout<<"\nName:"<<name<<endl;
    cout<<"\nDepartment:"<<dep<<endl;
}
int main()
{
    company manager[3],teamlead[5];
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter Details of Manager:"<<i+1;
        manager[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Details of Team Leader:"<<i+1;
        teamlead[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"\nDetails of Manager:"<<i+1;
        manager[i].display();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\nDetails of Team Leader:"<<i+1;
        teamlead[i].display();
    }
    return 0;
}