#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity-> " << v.capacity() << endl; // capacity 0
    cout << "Size-> " << v.size() << endl;         // size 0

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl; // capacity 1
    cout << "Size-> " << v.size() << endl;         // size 1

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl; // capacity dubule means 1 * 2 = 2
    cout << "Size-> " << v.size() << endl;         // size 2

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl; // capacity dubule means 2 * 2 = 4
    cout << "Size-> " << v.size() << endl;         // size 3

    cout << "Element at second index-> " << v.at(2) << endl;
    cout << "Element at second index-> " << v[2] << endl;

    cout << "Front-> " << v.front() << endl;
    cout << "Back-> " << v.back() << endl;

    cout << "Empty or not-> " << v.empty() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear capacity " << v.capacity() << endl; // capacity 4
    cout << "before clear size " << v.size() << endl;         // size 2
    v.clear();
    cout << "after clear capacity " << v.capacity() << endl; // capacity 4
    cout << "after clear size " << v.size() << endl;         // size 0
    
    v.shrink_to_fit();
    cout << "after shrink capacity " << v.capacity() << endl; // capacity 0
    cout << "after shrink size " << v.size() << endl;         // size 0
}

// vector containers are implemented as dynamic array
// https://www.cplusplus.com/reference/vector/vector/