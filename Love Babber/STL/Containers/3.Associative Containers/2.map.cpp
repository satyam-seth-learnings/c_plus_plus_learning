#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Satyam";
    m[13] = "Kumar";
    m[3] = "Seth";

    m.insert({5, "bheem"});

    cout << "finding 13-> " << m.count(13) << endl;
    cout << "finding -13-> " << m.count(-13) << endl;

    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(13);

    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " ";
    }
    cout << endl;
}

// Maps are associative containers that store elements formed by a combination 
// of a key value and a mapped value, following a specific order.
// map is implimented using b tree or red black tree
// https://www.cplusplus.com/reference/map/map/