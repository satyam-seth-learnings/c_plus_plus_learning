#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char site[50];
    int subscriber;
    ofstream outfile;
    outfile.open("data.txt");
    outfile<<"Geekyshows"<<endl;
    outfile<<"1000"<<endl;
    outfile.close();
    ifstream infile;
    infile.open("data.txt");
    infile>>site;
    infile>>subscriber;
    cout<<"Website Name:"<<site<<endl;
    cout<<"Total Subscriber:"<<subscriber<<endl;
    return 0;
}