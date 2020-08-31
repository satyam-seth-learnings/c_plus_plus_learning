#include<iostream>
using namespace std;
class student
{
	private:
		char name[20]="Satyam";
		int roll=123;
	public:
		void getdata();
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll:"<<roll<<endl;
		}
};
int main()
{
	student stu;
	stu.display();
	return 0;
}
