#include<iostream>
using namespace std;
int add(int*,int*);
int main()
{
	int rani=10,amit=20;
	add(&rani,&amit);
	cout<<"Rani's Age:"<<rani<<endl;
	cout<<"Amit's Age:"<<amit<<endl;
	return 0;
}
int add(int *r,int *a)
{
	*r=20;
	*a=10;
}
