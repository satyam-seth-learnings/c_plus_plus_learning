#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
			//Or	*p=20;
	cout<<"Address of a:"<<p<<endl;
	cout<<"Value of a:"<<*p<<endl;
	return 0;
}
