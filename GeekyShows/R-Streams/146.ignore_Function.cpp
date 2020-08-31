#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int a;
    cout<<"Enter any number:";
    cin>>a;
    cin.ignore();   //Or cin.ignore(12,'\n');   //Or
    cout<<"Enter Text:";
    cin.getline(str,20);
    cout<<str;
    cout<<a;
    return 0;
}