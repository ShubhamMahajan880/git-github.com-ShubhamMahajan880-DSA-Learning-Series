#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <deque>
using namespace std;

// Stack using deque -

class Stack
{
    deque<int> deq;

public:
    void push(int data)
    {
        deq.push_back(data);
    }

    bool isempty()
    {
        return deq.empty();
    }
    void pop()
    {
        if (isempty())
        {
            return;
        }
        deq.pop_back();
    }

    int top()
    {
        if (isempty())
        {
            cout << "nthing inside stack, how can be on top" << endl;
            return 0;
        }
        return deq.back();
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while (!s.isempty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}