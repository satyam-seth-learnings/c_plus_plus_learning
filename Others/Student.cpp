#include<iostream>
using namespace std;
#define SIZE 3
class student
{
	int roll[SIZE];
	char name[SIZE][20];
	public:
		void getdata(void);
		void putdata(void);
};
void student::getdata(void)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<"Enter The Details Of Student"<<i+1<<":"<<endl;
		cout<<"Enter The Roll No.:";
		cin>>roll[i];
		cout<<"Enter The Name:";
		cin>>name[i];
	}
}
void student::putdata(void)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<"Details Of Student"<<i+1<<":"<<endl;
		cout<<"Roll No.:"<<roll[i]<<endl;
		cout<<"Name:"<<name[i]<<endl;
	}
}
int main()
{
	 student a;
	 a.getdata();
	 a.putdata();
	 return 0;
}
