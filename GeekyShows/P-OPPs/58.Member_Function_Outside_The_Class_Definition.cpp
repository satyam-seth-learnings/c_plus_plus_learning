#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int roll;
	public:
		void getdata();
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll:"<<roll<<endl;
		}
};
void student::getdata(void)
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Roll:";
	cin>>roll;
}
int main()
{
	student stu;
	stu.getdata();
	stu.display();
	return 0;
}
