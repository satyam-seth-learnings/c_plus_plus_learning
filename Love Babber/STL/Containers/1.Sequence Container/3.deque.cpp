#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    cout << "Print first index element-> " << d.at(1) << endl;

    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << "Empty or not-> " << d.empty() << endl;

    cout << "Before erase size-> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size-> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << d.max_size();
}

// deque (usually pronounced like "deck") is an irregular acronym of double-ended queue
// https://www.cplusplus.com/reference/deque/deque/