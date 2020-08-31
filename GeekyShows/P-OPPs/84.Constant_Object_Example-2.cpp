#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
        void disp(void) const;
};
void student::disp(void) const
{
    cout<<"I am constant.";
}
int main()
{
    const student obj;
    obj.disp();
}