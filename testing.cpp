#include <bits/stdc++.h>
using namespace std;

// 2) Stack impmentation usig LL -
// Case 2 - By creating LL manually -

template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = NULL;
    }
};
template <class T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push_front(T val)
    {
        Node<T> *newNode = new Node<T>(val);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_front()
    {
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
    }
    T top()
    {
        return head->data;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    Stack<int> s;
    s.push_front(4);
    s.push_front(3);
    s.push_front(2);
    s.push_front(1);

    cout << "Our Stack is - " << endl;
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop_front();
    }
    cout << endl;
}