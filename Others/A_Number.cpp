#include<iostream>
using namespace std;
class numbers
{
	private:
		int a;
	public:
	    void getdata(void);
	    void putdata(void);
};
void numbers::getdata(void)
{
	cout<<"Enter A Number:";
	cin>>a;
}
void numbers::putdata(void)
{
	cout<<"You Enter A Number:"<<a;
}
int main()
{
	numbers num;
	num.getdata();
	num.putdata();
}

