#include<iostream>
#include<iomanip>
using namespace std;
ostream &geekyshows(ostream &output)
{
    output<<"Rs.";
    return output;
}
int main()
{
    cout<<geekyshows<<12.2000;
    return 0;
}