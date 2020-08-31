#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int *p,total=0;
    cout<<"Enter no. of Elements:";
    cin>>n;
    p=new int[n];
    cout<<"Enter Elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Elements are:";
    for(i=0;i<n;i++)
    {
        cout<<'\t'<<p[i];
        total=total+p[i];
    }
    cout<<"\nTotal:"<<total;
    return 0;
}