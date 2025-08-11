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

//7) Merge Sort Implemetation on Linked List - 

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

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(Node *node)
    {
        Node *temp = node;

        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    Node *splitAtMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL;// Split at Middle
        }
        return slow;// slow = rightHead
    }

    Node *merge(Node *left, Node *right)
    {
        List ans;
        Node *i = left;
        Node *j = right;

        while (i != NULL && j != NULL)
        {
            if (i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else
            {
                ans.push_back(j->data);
                j = j->next;
            }
        }

        while (i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }

        while (j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }

        return ans.head;
    }

    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *rightHead = splitAtMid(head);

        Node *left = mergeSort(head);
        Node *right = mergeSort(rightHead);

        return merge(left, right);
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.printList(ll.head);//5-->4-->3-->2-->1-->NULL

    ll.head = ll.mergeSort(ll.head);

    // Merge Sort Implementation on Linked List
    ll.printList(ll.head);//1-->2-->3-->4-->5-->NULL

    return 0;
}
// ____________ ____________ ____________ ____________ ____________
