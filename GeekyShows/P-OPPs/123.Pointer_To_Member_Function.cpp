#include<iostream>
using namespace std;
class Laptop
{
    int Ram(int m)
    {
        return m;
    }
    public:
        int (Laptop::*x)(int)=&Laptop::Ram;
};
int main()
{
    Laptop a;
    cout<<(a.*a.x)(5);
    return 0;
}