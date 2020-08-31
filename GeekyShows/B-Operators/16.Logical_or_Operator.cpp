#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a=5,b=2,c=5,d=3,result;
	result=((a<b)||(c>d));	//Or	result=((a>b)||(c>d));	//Or	result=((a<b)||(c<d));	//Or	result=((a<b)||(c<d));
	cout<<result<<endl;
}
