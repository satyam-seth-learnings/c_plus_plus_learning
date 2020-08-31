#include<iostream>
using namespace std;
class total
{
    int n;
    public:
        void getdata(void);
        void putdata(void);
        void add(total&,total&);
};
void total::getdata(void)
{
    cout<<"Enter numbers:";
    cin>>n;
}
void total::putdata(void)
{
    cout<<n<<endl;
}
void total::add(total &x,total &y)  // x and y are objects
{
                // Or x.n=10;
                // Or y.n=20;
    n=x.n+y.n;
}
int main()
{
    total r,s,result;
    r.getdata();
    s.getdata();
    result.add(r,s);
    cout<<"Value of A:";
    r.putdata();
    cout<<"Value of B:";
    s.putdata();
    cout<<"Addition:";
    result.putdata();
}