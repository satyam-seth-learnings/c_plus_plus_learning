#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50]   ;
    int roll;
    ofstream outfile("Student");    // Connect Student File To Stream
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Roll Name:";
    cin>>roll;
    outfile<<name<<endl;    //Write TO File Student
    outfile<<roll<<endl;    //Write TO File Student
    outfile.close();    // Disconnect File From Stream
    ifstream infile("Student");    // Connect Student File To Stream
    infile>>name;   // Read From File
    infile>>roll;   // Read From File
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    infile.close(); // Disconnect File From Stream
    return 0;
}