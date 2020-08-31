#include<iostream>
using namespace std;
class student
{
	private:
		int id;	//Data Member
		char name[20];	//Data Member
	public:
		void Getdata(void);	//Member Function
		void display(void)	//Member Function
		{
			cout<<id<<'\t'<<name<<endl;
		}
};
int main()
{
	student stu1,stu2;	//Objects
}
