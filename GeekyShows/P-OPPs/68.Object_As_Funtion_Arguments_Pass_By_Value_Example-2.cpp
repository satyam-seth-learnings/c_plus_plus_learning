#include<iostream>
using namespace std;
class matrix
{
    int item[3][3];
    public:
        void getdata(void);
        void putdata(void);
        void add(matrix,matrix);
};
void matrix::getdata(void)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>item[i][j];
        }
    }
}
void matrix::putdata(void)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<item[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void matrix::add(matrix m,matrix n)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            item[i][j]=m.item[i][j]+n.item[i][j];
        }
    }
}
int main()
{
    matrix a,b,result;
    cout<<"Matrix A:\n";
    a.getdata();
    cout<<"Matrix B:\n";
    b.getdata();
    cout<<"You Entered Matrix A:\n";
    a.putdata();
    cout<<"You Entered Matrix B:\n";
    b.putdata();
    result.add(a,b);
    cout<<"Addition:\n";
    result.putdata();
    return 0;
}