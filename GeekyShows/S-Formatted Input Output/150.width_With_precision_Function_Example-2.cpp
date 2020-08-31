#include<iostream>
using namespace std;
int main()
{
    float a=22.00/7.00;
    int i;
    for(i=1;i<8;i++)
    {
        cout.width(i+1);
        cout.precision(i);
        cout<<a<<endl;
    }
    return 0;
}