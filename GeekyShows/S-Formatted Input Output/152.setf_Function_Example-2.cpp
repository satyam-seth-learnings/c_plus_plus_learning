#include<iostream>
using namespace std;
int main()
{
    float a=12.500;
    cout.precision(5);
                        //Or cout.setf(ios::showpoint);
    cout<<a;
    return 0;
}