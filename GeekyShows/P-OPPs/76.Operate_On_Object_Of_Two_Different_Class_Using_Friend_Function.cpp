#include<iostream>
using namespace std;
class rani;
class rahul
{
    int a;
    public:
    void getdata(void)
    {
        cout<<"Enter Rahul's Total Marks:";
        cin>>a;
    }
    friend void add(rahul,rani);
};
class rani
{
    int b;
    public:
        void getdata(void)
        {
            cout<<"Enterb Rani's Total Marks:";
            cin>>b;
        }
        friend void add(rahul,rani);
};
void add(rahul m,rani n)
{
    cout<<"Marks:"<<m.a+n.b<<endl;
}
int main()
{
    rahul k;
    rani v;
    k.getdata();
    v.getdata();
    add(k,v);
}