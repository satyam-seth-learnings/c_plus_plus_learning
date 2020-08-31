#include<iostream>
using namespace std;
int main()
{
    int a[5],n,i,total=0;
    cout<<"Enter no. of Elements:";
    cin>>n;
    cout<<"Enter Elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements are:";
    for(i=0;i<n;i++)
    {
        cout<<'\t'<<a[i];
        total=total+a[i];
    }
    cout<<"\nTotal:"<<total;
    return 0;
}