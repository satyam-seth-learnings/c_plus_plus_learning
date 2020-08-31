#include<iostream>
using namespace std;
union student
{
	int roll;
	char name[20];
};
int main()
{
	union student stu;
	cout<<"Enter Name:";
	cin>>stu.name;
	cout<<"Enter Roll:";
	cin>>stu.roll;
	cout<<"Name:"<<stu.name<<endl;
	cout<<"Roll:"<<stu.roll<<endl;
	return 0;
}
