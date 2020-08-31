#include<iostream>
using namespace std;
void age(int &,int &);
int main()
{
	int rani=10,amit=20;
	age(rani,amit);
	cout<<"Rani's Age:"<<rani<<endl;
	cout<<"Amit's Age:"<<amit<<endl;
	return 0;
}
void age(int &r,int &a)
{
	r=50;
	a=30;
}
