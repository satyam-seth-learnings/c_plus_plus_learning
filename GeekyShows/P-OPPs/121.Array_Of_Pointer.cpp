#include<iostream>
using namespace std;
int main()
{
    int a[]={10,30,50,70};
    int *p[3];
    int i;
    cout<<"Output via Pointer:"<<endl;
    cout<<"Address\t Value";
    for(i=0;i<4;i++)
    {
        p[i]=&a[i];
        cout<<"\n"<<p[i];
        cout<<"    "<<*p[i];
    }
    return 0;
}