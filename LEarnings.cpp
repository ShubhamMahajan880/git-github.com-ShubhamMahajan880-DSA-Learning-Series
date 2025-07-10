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
using namespace std;

// Floyd's Cycle FInding Algorithm - Detect a Cycle/Loop in LL

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
        Node *newNode = new Node(val);
        // Node* newNode(val);

        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // taking +1
            fast = fast->next->next; // taking +2  Slow fast conditions are checking later first incrementing, aas initially both are at the same place

            if (slow == fast)
            {
                cout << "Yes, Cycle Exist" << endl;
                return true;
            }
        }
        cout << "No, cycle founf in the LL" << endl;
        return false;
    }
};

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); // 1-->2-->3-->4-->5-->NULL , it's a Linear LL tilll now,
    ll.tail->next = ll.head;
    ll.isCycle(ll.head); // Yes, Cycle Exist
}

// -------------------

// Remove a cycle from LL -
