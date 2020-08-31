#include<iostream>
using namespace std;
int main()
{
    char str;
    cout<<"Enter a character:";
    while(str!='\n')
    {
        cin.get(str);
        cout.put(str);
    }
    return 0;
}