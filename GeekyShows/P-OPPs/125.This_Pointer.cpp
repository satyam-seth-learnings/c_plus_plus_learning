#include<iostream>
using namespace std;
class mobile
{
    int m=10;   //Or    int m;
    public:
        void disp()
        {
                                //Or m=10;  //Or this->m=10;    //Or (*this).m=10;
            cout<<"m="<<m<<endl;
            cout<<"this->m="<<this->m<<endl;
            cout<<"(*this).m="<<(*this).m<<endl;
        }
};
int main()
{
    mobile obj;
    obj.disp();
    return 0;
}