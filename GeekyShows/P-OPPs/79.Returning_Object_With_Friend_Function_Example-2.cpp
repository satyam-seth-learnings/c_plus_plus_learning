#include<iostream>
using namespace std;
class Sum
{
    int a,b;
    public:
        void get_number(void);
        void putdata(void);
        friend Sum add(Sum s);   //    friend funtion      
};
Sum add(Sum s)  //  friend function definition
{
    Sum temp;
    temp.a=s.a+s.b;
    return temp;
}
void Sum::get_number(void)
{
    cout<<"Enter Any two Numbers:\n";
    cin>>a>>b;
}
void Sum::putdata(void)
{
    cout<<"Addition:"<<a;
}
int main()
{
    Sum z,result;
    z.get_number();
    result=add(z);
    result.putdata();
    return 0;
}