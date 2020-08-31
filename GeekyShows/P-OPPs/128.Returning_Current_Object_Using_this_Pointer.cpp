#include<iostream>
using namespace std;
class exam
{
    int m;
    public:
        exam maxi(exam &ob,exam &ob1)
        {
            ob.m=30;
            ob1.m=20;
            if(ob1.m>ob.m)
            {
                return ob1;
            }
            else
            {
                return *this;
            }
        }
        void disp()
        {
            cout<<m;
        }
};
int main()
{
    exam obj,obj1,obj2;
    obj2=obj.maxi(obj,obj1);    //Or obj2=obj1.maxi(obj,obj1);
    obj2.disp();
}