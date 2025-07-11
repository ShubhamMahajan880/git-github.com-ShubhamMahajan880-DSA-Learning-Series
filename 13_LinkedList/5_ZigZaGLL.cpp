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

//8) Zig-Zag LL - Alternate Nodes in LL
/* Approach we're gonna follow - First Split the LL from Mid
- The Reverse the Right LL
- Then print Alternative from both List One byOne
 */
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
            prev->next = NULL; // Split at Middle
        }
        return slow; // slow = rightHead
    }

    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node *zigZagLL(Node *head)
    {
        Node *rightHead = splitAtMid(head);
        Node *rightHeadRev = reverse(rightHead);

        Node *left = head;
        Node *right = rightHeadRev;

        while (left != NULL && right != NULL)
        {
            Node *nextLeft = left->next;
            Node *nextRight = right->next;

            left->next = right;
            right->next = nextLeft;

            tail = right;
            left = nextLeft;
            right = nextRight;
        }
        if (right != NULL)
        {
            tail->next = right;
        }
        return head;
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

    ll.printList(ll.head); // 5-->4-->3-->2-->1-->NULL
    ll.head = ll.zigZagLL(ll.head);
    ll.printList(ll.head);//1-->5-->2-->4-->3-->NULL    
}
// ____________ ____________ ____________ ____________ ____________
