#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"Enter No. of Rows:";
    cin>>row;
    cout<<"Enter No. of Columns:";
    cin>>col;
    cout<<"Enter 1st Matrix Elements:\n";
    // Dynamic Alloction for 1st Matrix
    int **p=new int *[row];
    for(i=0;i<row;i++)
    {
        p[i]=new int[col];
    }
    // Storing Value for 1st Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"Enter 2nd Matrix Elements:\n";
    // Dynamic Alloction for 2nd Matrix
    int **p1=new int *[row];
    for(i=0;i<row;i++)
    {
        p1[i]=new int[col];
    }
    // Storing Value for 1st Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>p1[i][j];
        }
    }
    // Printing Value of 1st Matrix
    cout<<"1st Matrix:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<p[i][j]<<'\t';
        }
        cout<<endl;
    }
    // Printing Value of 2nd Matrix
    cout<<"2nd Matrix:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<p1[i][j]<<'\t';
        }
        cout<<endl;
    }
    // Dynamic Alloction for Total Matrix
    int **sum=new int *[row];
    for(i=0;i<row;i++)
    {
        sum[i]=new int[col];
    }
    // Addition of Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=p[i][j]+p1[i][j];
        }
    }
    // Printing Value of Total Matrix
    cout<<"Total:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<sum[i][j]<<'\t';
        }
        cout<<endl;
    }
    // Free Memory of 1st Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            delete[] p[i];
        }
    }
    // Free Memory of 2nd Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            delete[] p1[i];
        }
    }
    // Free Memory of Total Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            delete[] sum[i];
        }
    }
    return 0;
}