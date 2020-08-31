#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter 0 to exit\n\n";
	while(1)
	{
		cout<<"Enter any value:";
		cin>>i;
		if(i==0)
		{
			cout<<"Program Exit.\n\n";
			break;
		}
		cout<<"You Entered:"<<i<<endl<<endl;
	}
}
