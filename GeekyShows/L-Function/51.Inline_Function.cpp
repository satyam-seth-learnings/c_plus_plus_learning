#include<iostream>
using namespace std;
inline int add(int a,int b)	//Inline Function
{
	return(a+b);
}
int main()
{
	int x=10,y=20;
	cout<<add(x,y)<<endl;	//Function Call
	return 0;
}
