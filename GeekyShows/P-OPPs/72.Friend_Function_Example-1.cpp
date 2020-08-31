#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
        void get_number(void);
        friend int add(void);   //  friend function, It is non-member function
};
void sum::get_number(void)
{
    cout<<"Enter Any two Numbers:\n";
    cin>>a>>b;
}
int add(void)   //  fuction definition
{
    sum s;
    int temp;
    s.get_number();
    temp=s.a+s.b;   //  accessing private data(a and b) from non member dunction(friend function)
    return temp;
}
int main()
{
    int result;
    result=add();
    cout<<"Sum="<<result<<endl;
    return 0;
}