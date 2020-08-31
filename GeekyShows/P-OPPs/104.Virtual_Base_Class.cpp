// Page-163
#include<iostream>
using namespace std;
class Student
{
    protected:
        char name[100]="Geekyshows";
};
class Exam:virtual public Student   //Or    class Exam:public Student
{
    protected:
        int mark=100;
    public:
        void disp_mark(void)
        {
            cout<<"Marks:"<<mark<<endl;
        }
};
class Project:virtual public Student    //Or    class Project:public Student
{
    protected:
        int p_mark=200;
    public:
        void disp_pmark(void)
        {
            cout<<"Project Marks:"<<p_mark<<endl;
        }
};
class Result:public Exam,public Project
{
    public:
        void disp_total(void)
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Total Marks:"<<mark+p_mark<<endl;
        }
};
int main()
{
    Result obj;
    obj.disp_mark();
    obj.disp_pmark();
    obj.disp_total();
}