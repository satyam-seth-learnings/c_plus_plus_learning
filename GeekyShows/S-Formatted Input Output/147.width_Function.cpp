#include<iostream>
using namespace std;
int main()
{
    int item[4]={1,10,100,1000};
    int price[4]={12,231,2,13};
    int i;
    cout.width(6);  //Or
    cout<<"Item";
    cout.width(6);  //Or
    cout<<"Price";
    cout<<endl;
    for(i=0;i<4;i++)
    {
        cout.width(6);  //Or
        cout<<item[i];
        cout.width(6);  //Or
        cout<<price[i];
        cout<<endl;
    }
    return 0;
}