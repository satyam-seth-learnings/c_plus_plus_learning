#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;
class student
{
	int roll[SIZE];
	char name[SIZE][20];
	public:
		void getdata(void);
		void display(void);
};
void student::getdata(void)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<"\nEnter Name:";
		cin>>name[i];
		cout<<"Enter Roll:";
		cin>>roll[i];
	}
}
void student::display(void)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<"\nName:"<<name[i]<<endl;
		cout<<"Roll:"<<roll[i]<<endl;
		getch();
	}
}
int main()
{
	student st;
	st.getdata();
	st.display();
	return 0;
}
