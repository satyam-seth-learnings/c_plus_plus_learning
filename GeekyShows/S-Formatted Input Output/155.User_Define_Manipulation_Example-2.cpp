#include<iostream>
#include<iomanip>
using namespace std;
ostream &geekyshows(ostream &output)
{
    output.setf(ios::showpoint);
    output<<setprecision(4);
    output<<setfill('#');
    output.width(10);
    return output;
}
int main()
{
    cout<<geekyshows<<12.2000<<endl;
    cout<<geekyshows<<40.2000;
    return 0;
}