#include<iostream>
using namespace std;
class Food
{
    protected:
        char name[100];
        char name1[100];
    public:
        void getdata_n(void);
};
class Rate:public Food
{
    protected:
        int price;
        int price1;
    public:
        void getdata_p(void);
};
class Total:public Rate
{
    int sum;
    public:
        void add(void);
        void disp(void);
};
void Food::getdata_n(void)
{
    cout<<"Food Name:";
    cin>>name;
    cout<<"Food Name:";
    cin>>name1;
}
void Rate::getdata_p(void)
{
    cout<<"Enter Price of "<<name<<" :";
    cin>>price;
    cout<<"Enter Price of "<<name1<<" :";
    cin>>price1;
}
void Total::add(void)
{
    sum=price+price1;
}
void Total::disp(void)
{
    cout<<endl<<"***********************"<<endl;
    cout<<"Food Name\tPrice"<<endl;
    cout<<name<<"\t"<<"\t"<<price<<endl;
    cout<<name1<<"\t"<<"\t"<<price1<<endl;
    cout<<"\t"<<"\t"<<"-------"<<endl;
    cout<<"Sum\t\t"<<sum<<endl;
}
int main()
{
    Total num;
    num.getdata_n();
    num.getdata_p();
    num.add();
    num.disp();
    return 0;
}