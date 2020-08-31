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
	cout<<"Name:"<<stu.name<<endl;
	cout<<"Enter Roll:";
	cin>>stu.roll;
	cout<<"Roll:"<<stu.roll<<endl;
							//Or	cout<<"Name:"<<stu.name<<endl;
	return 0;
}
