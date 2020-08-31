// Where use this pointer
#include<iostream>
using namespace std;
class mobile
{
    int m;
    public:
        void getdata(int m)  
        {
            this->m=m;  //Or m=m;
        }
        void disp()
        {
            cout<<"m="<<m<<endl;
            cout<<"this->m="<<this->m<<endl;
            cout<<"(*this).m="<<(*this).m<<endl;
        }
};
int main()
{
    mobile obj;
    obj.getdata(20);
    obj.disp();
    return 0;
}