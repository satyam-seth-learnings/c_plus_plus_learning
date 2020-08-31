#include<iostream>
using namespace std;
int main()
{
	int n;
	for(n=1;n<=10;n++)
	{
		if(n==7)
		{
			continue;
		}
		cout<<n<<'\t';
	}
	cout<<'\n';
	return 0;
}
