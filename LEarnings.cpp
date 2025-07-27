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

    int getSize()
    {
        Node *temp = head;

        int size = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        return size;
        cout << "The size of LL is - " << size << endl;
    }

    int removeNode(int n)
    {

        Node *prev = head;
        int sz = getSize();
        for (int i = 0; i < (sz - n); i++)
        {
            prev = prev->next;
        }
        Node *DeleteNode = prev->next;
        cout << "Deleting the Node with data -  " << DeleteNode->data << endl;
        prev->next = prev->next->next;
    }

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "yes, Cycle Exist" << endl;
                return true;
            }
        }
        cout << "No Cycle Found - " << endl;
        return false;
    }
};

int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print_List();
    cout << endl;

    // ll.reverse_list();
    // ll.print_List();

    // ll.removeNode(4);
    // ll.print_List();
    ll.tail->next = ll.head;
    ll.isCycle(ll.head);
    return 0;
}