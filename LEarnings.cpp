#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#include <list>
using namespace std;

// Queeu Reversal -

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    cout << "So, reverse using stack is - " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Queue is - " << endl;
    printQueue(q);

    cout << "and the revese queue is - " << endl;
    reverseQueue(q);
}