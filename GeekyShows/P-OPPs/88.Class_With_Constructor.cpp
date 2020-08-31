#include<iostream>
using namespace std;
class comment
{
    public:
        comment()
        {
            cout<<"I Love programming."<<endl;
        }
        void show(void)
        {
            cout<<"I am sick";
        }
};
int main()
{
    comment yes;
                    //Or    yes.show();
}