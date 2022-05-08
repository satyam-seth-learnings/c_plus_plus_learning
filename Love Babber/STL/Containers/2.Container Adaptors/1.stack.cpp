#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Satyam");
    s.push("Kumar");
    s.push("Seth");

    cout << "Top Element-> " << s.top() << endl;
    cout << "Size of stack-> " << s.size() << endl;

    s.pop();

    cout << "Top Element-> " << s.top() << endl;
    cout << "Size of stack-> " << s.size() << endl;

    cout << "Empty or not-> " << s.empty() << endl;
}

// Stacks are a type of container adaptor, specifically designed
// to operate in a LIFO context (last-in first-out)
// https://www.cplusplus.com/reference/stack/stack/