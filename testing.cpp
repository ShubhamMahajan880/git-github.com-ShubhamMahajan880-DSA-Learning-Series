#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
// #include<list>
// #include<iterator>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    // Pushing from Front
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head = NULL)
        {
            head = tail = NULL;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(5);
}
