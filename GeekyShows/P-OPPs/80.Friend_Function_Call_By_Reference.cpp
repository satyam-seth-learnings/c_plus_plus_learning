// page-112
#include<iostream>
using namespace std;
class rahul;
class rani
{
    int x;
    public:
        void getdata()
        {
            cout<<"Rani has Rs.:";
            cin>>x;
        }
        void display()
        {
            cout<<"Rani has Rs.:"<<x<<endl;
        }
        friend void exchange(rani &,rahul &);
};
class rahul
{
    int y;
    public:
        void getdata()
        {
            cout<<"Rahul has Rs.:";
            cin>>y;
        }
        void display()
        {
            cout<<"Rahul has Rs.:"<<y<<endl;
        }
        friend void exchange(rani &,rahul &);
};
void exchange(rani &m,rahul &n)
{
    int temp;
    temp=m.x;
    m.x=n.y;
    n.y=temp;
}
int main()
{
    rani a;
    rahul b;
    a.getdata();
    b.getdata();
    cout<<"\nBefore exchange:\n";
    a.display();
    b.display();
    exchange(a,b);
    cout<<"\nAfter exchange:\n";
    a.display();
    b.display();
    return 0;
}