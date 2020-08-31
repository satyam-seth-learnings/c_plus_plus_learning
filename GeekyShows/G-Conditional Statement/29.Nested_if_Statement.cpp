#include<iostream>
using namespace std;
int main()
{
	int a=5,b=2,c=4,d=1;
	if(a>b)
	{
		if(c>d)	//Or	if(c<d)
		{
			cout<<"Good Job"<<endl;
		}
		if(c>d)
		{
			cout<<"C greater."<<endl;
		}
	}
	return 0;
}
