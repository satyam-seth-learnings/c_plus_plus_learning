#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter Your Choice(1 or 2):";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				cout<<"I am not good";
				break;
			}
		case 2:
			{
				cout<<"I am not bad";
				break;
			}
		default:
			{
				cout<<"Wrong choice dudi";
				break;
			}
	}
	return 0;
}
