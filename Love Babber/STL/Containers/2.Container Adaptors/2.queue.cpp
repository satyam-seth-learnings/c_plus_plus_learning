#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Satyam");
    q.push("Kumar");
    q.push("Seth");

    cout << "Size before pop-> " << q.size() << endl;
    cout << "First Element-> " << q.front() << endl;

    q.pop();

    cout << "Size after pop-> " << q.size() << endl;
    cout << "First Element-> " << q.front() << endl;

    cout << "Empty or not-> " << q.empty() << endl;
}

// queues are a type of container adaptor, specifically designed
// to operate in a FIFO context (first-in first-out)
// https://www.cplusplus.com/reference/queue/queue/