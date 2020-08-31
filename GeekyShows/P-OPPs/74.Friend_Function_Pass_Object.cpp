#include<iostream>
using namespace std;
class Sum
{
    int a,b;
    public:
        void get_number(void);
        friend int add(Sum s);
};
void Sum::get_number(void)
{
    cout<<"Enter Any two Numbers:\n";
    cin>>a>>b;
}
int add(Sum s)
{
    int temp;
    temp=s.a+s.b;   //  accessing private data
    return temp;
}
int main()
{
    Sum z;
    int result;
    z.get_number();
    result=add(z);
    cout<<"Sum="<<result<<endl;
    return 0;
}