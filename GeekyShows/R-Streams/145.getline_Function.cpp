#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter Text:";
    cin.getline(str,20);    //Or cin.getline(str,20,'t');
    cout<<str;
    return 0;
}