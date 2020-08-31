#include<iostream>
using namespace std;
int main()
{
    char line[30];
    cout<<"Enter Text and terminate by t:";
    cin.get(line,30,'\t');
    cout<<line;
    return 0;
}