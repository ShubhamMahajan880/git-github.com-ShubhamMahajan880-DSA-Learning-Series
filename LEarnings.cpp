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
        cout << "The size of LL is - " << size << endl;
        return size;
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
                cout << "Cycle detected in the Linked List." << endl;
                return true;
            }
        }

        cout << "No cycle exists in the Linked List." << endl;
        return false;
    }

    void removeCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        bool hasCycle = false;

        // First detect the cycle
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "Cycle detected. Proceeding to remove it..." << endl;
                hasCycle = true;
                break;
            }
        }

        if (!hasCycle)
        {
            cout << "No cycle to remove." << endl;
            return;
        }

        // Reset slow to head
        slow = head;

        if (slow == fast)
        {
            // Special case: Cycle starts at head
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            // General case
            Node *prev = NULL;
            while (slow != fast)
            {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = NULL;
        }

        cout << "Cycle removed successfully." << endl;
    }

    Node *splitAtmid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = head;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != NULL)
        {
            prev->next = NULL;
        }
        return slow;
    }

    void mergeSort(Node *head)
    {
        if (head == NULL && head->next == NULL)
        {
            return;
        }

        Node *rightHead = splitAtmid(head);
        mergeSort(head);
        mergeSort(rightHead);
        merge(head, rightHead);
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

    // Manually create a cycle
    // ll.tail->next = ll.head;

    // ll.isCycle(ll.head);

    // cout << "Now, removing the cycle...\n";
    // ll.removeCycle(ll.head);

    // cout << "Final Linked List after removing cycle:\n";
    // ll.print_List();

    return 0;
}
