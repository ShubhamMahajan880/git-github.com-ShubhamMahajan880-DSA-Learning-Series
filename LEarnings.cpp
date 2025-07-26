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

    void push_front(int val)
    {
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void print_List()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "--> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverse_list()
    {
        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;

            // updations -
            prev = curr;
            curr = next;
        }

        head = prev;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(7);
    ll.push_front(8);

    ll.print_List();
    cout << endl;

    ll.reverse_list();
    ll.print_List();
}