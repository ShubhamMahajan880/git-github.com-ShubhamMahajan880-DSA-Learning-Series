#include <iostream>
#include <Queue>
#include <string>
#include <list>
#include <stack>
#include <queue>

using namespace std;

// Queue Implementatin  using LL -

class Queue
{
public:
    list<int> ll;

    void push(int val)
    {
        ll.push_back(val);
    }

    bool isempty()
    {
        return ll.empty();
    }
    void pop()
    {
        if (isempty())
        {
            return;
        }

        ll.pop_front();
    }

    int front()
    {
        return ll.front();
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Inserted Queue is - " << endl;
    while (!q.isempty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "After applying all the queue iis - " << endl;
    while (!q.isempty())
    {
        cout << q.front() << " ";
    }
    cout << endl;
}