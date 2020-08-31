#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    int roll,mark;
    ofstream outfile;   //  Creating Output Stream
    outfile.open("Student1");   //  Connecting 1st File To Output Stream
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
    outfile<<name<<endl;    //  Write To File Student
    outfile<<roll<<endl;    //  Write To File Student
    outfile.close();    //  Disconnect File Form Stream
    outfile.open("Student2");   //  Connecting 2nd File To Output Stream
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
    cout<<"Enter Mark:";
    cin>>mark;
    outfile<<name<<endl;    //  Write To File Student
    outfile<<roll<<endl;    //  Write To File Student
    outfile<<mark<<endl;    //  Write To File Student
    outfile.close();    //  Disconnect File Form Stream
    ifstream infile;    //  Create Input Stream
    infile.open("Student1");    //  Connecting 1st File To Input Stream
    infile>>name;   //  Read From File
    infile>>roll;   //  Read From File
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    infile.close(); //  Disconnect File From Stream
    infile.open("Student2");    //  Connecting 2nd File To Input Stream
    infile>>name;   //  Read From File
    infile>>roll;   //  Read From File
    infile>>mark;   //  Read From File
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Mark:"<<mark<<endl;
    infile.close(); //  Disconnect File From Stream
    return 0;
}