#include<iostream>
#include<conio.h>
using namespace std;
class Number
{
    static int num; //  num is static member
    public:
        void getdata()
        {
            cout<<"Enter Number:";
            cin>>num;
        }
        void display(void)
        {
            cout<<"Number:"<<num<<endl;
        }
};
int Number::num;    //  definition of static data member
int main()
{
    Number x,y,z;
    x.display();
    y.display();
    z.display();
    getch();
    x.getdata();    //  getting data into object x
    y.getdata();    //  getting data into object y
    z.getdata();    //  getting data into object z
    cout<<"After Entering data:"<<endl;
    x.display();
    y.display();
    z.display();
    return 0;
}