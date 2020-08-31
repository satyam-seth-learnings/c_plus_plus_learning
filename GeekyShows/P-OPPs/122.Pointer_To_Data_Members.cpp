#include<iostream>
using namespace std;
class Laptop
{
    public:
        int Ram;
};
int main()
{
    int Laptop::*pRam;  //Or
    pRam=&Laptop::Ram;  //Or int Laptop::*pRam=&Laptop::Ram;
    Laptop c1;
    c1.Ram=1; // direct access
    cout<<"Ram is "<<c1.Ram<<endl;
    c1.*pRam=2; // access via pointer to member
    cout<<"Ram is "<<c1.Ram<<endl;
    return 0;
}