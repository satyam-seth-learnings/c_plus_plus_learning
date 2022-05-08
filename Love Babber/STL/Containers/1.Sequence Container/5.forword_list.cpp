#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> l;

    // forward_list<int> n(l);
    forward_list<int> n(5, 100);

    cout << "Printing n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_front(1);
    l.push_front(2);
    l.push_front(3);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase_after(l.begin());
    cout << "after erase" << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.reverse();
    cout<<"after reverse"<<endl;
    for(int i: l){
        cout<<i<<endl;
    }\
    cout<<endl;
}

// forward lists are implemented as singly-linked lists
// https://www.cplusplus.com/reference/forward_list/forward_list/