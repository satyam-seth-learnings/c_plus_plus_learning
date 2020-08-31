#include<iostream>
using namespace std;
class Counter
{
    static int count;   //  static member:count is static
    int n;
    public:
        void setdata(void)  //  initializes object's members
        {
            count++;
            n=count;
        }
        void show_value_of_n(void)
        {
            cout<<"The Value of n is="<<n<<endl;
        }
        static void show_count(void)
        {
            cout<<"Count:"<<count<<endl;
        }
};
int Counter::count;
int main()
{
    Counter C1,C2;
    Counter::show_count();
    C1.setdata();
    C2.setdata();
    Counter::show_count();
    Counter C3;
    C3.setdata();
    Counter::show_count();
    C1.show_value_of_n();
    C2.show_value_of_n();
    C3.show_value_of_n();
    return 0;
}