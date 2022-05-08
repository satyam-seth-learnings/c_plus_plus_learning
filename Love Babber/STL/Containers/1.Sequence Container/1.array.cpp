#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at second index-> " << a.at(2) << endl;

    cout << "Empty or not-> " << a.empty() << endl;

    cout << "Front-> " << a.front() << endl;
    cout << "Back-> " << a.back() << endl;
}

// array containers are implemented as static array
// https://en.cppreference.com/w/cpp/language/array
// https://www.cplusplus.com/reference/array/array/