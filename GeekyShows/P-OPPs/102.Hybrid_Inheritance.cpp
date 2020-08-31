// Page-158
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
class order
{
    protected:
        int p;
        int p1;
    public:
        void getdataeach(void)
        {
            cout<<"No. of Order:";
            cin>>p;
            cout<<"No. of Order:";
            cin>>p1;
        }
};
class Total:public Rate,public order
{
    int sum;
    public:
        void add(void);
        void disp(void);
};
void Food::getdata_n(void)
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Name:";
    cin>>name1;
}
void Rate::getdata_p(void)
{
    cout<<"Enter Price of "<<name<<":";
    cin>>price;
    cout<<"Enter Price of "<<name1<<":";
    cin>>price1;
}
void Total::add(void)
{
    sum=(price*p)+(price1*p1);
}
void Total::disp(void)
{
    cout<<endl<<"********************************************"<<endl;
    cout<<"Food Name\tNo. of Order\tPrice Each"<<endl;
    cout<<name<<"\t"<<"\t"<<"    "<<p<<"\t"<<"\t"<<price<<endl;
    cout<<name1<<"\t"<<"\t"<<"    "<<p1<<"\t"<<"\t"<<price1<<endl;
    cout<<"Total="<<sum<<endl;
}
int main()
{
    Total num;
    num.getdata_n();
    num.getdata_p();
    num.getdataeach();
    num.add();
    num.disp();
    return 0;
}