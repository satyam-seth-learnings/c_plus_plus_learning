#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<"Geeky"<<endl;
    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    cout<<"Shows"<<endl;
    return 0;
}