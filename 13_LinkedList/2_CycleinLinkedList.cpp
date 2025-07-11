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

//5) Floyd's Cycle FInding Algorithm - Detect a Cycle/Loop in LL

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class List
// {
// public:
//     Node *head;
//     Node *tail;

//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         // Node* newNode(val);

//         if (tail == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void printList()
//     {
//         Node *temp = head;

//         while (temp != NULL)
//         {
//             cout << temp->data << "-->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }

//     bool isCycle(Node *head)
//     {
//         Node *slow = head;
//         Node *fast = head;

//         while (fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;       // taking +1
//             fast = fast->next->next; // taking +2  Slow fast conditions are checking later first incrementing, aas initially both are at the same place

//             if (slow == fast)
//             {
//                 cout << "Yes, Cycle Exist" << endl;
//                 return true;
//             }
//         }
//         cout << "No, cycle founf in the LL" << endl;
//         return false;
//     }
// };

// int main()
// {
//     List ll;
//     ll.push_front(5);
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList(); // 1-->2-->3-->4-->5-->NULL , it's a Linear LL tilll now,
//     ll.tail->next = ll.head;
//     ll.isCycle(ll.head); // Yes, Cycle Exist

//     // If we comment out the linking between tail to the heaad then the LL is linear and not contains loop, so op is not a cycle found

//     // ll.tail->next = ll.head;
//     ll.isCycle(ll.head);
//     /*
//     1-->2-->3-->4-->5-->NULL
//     No, cycle founf in the LL
//      */
// }

// -------------------

//5.1) Remove a cycle from LL -

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

    void removeCycle(Node *head)
    { // detect cycle
        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "Cycle Existing here.." << endl;
                isCycle = true;
                break;
            }
        }
        if (!isCycle)
        {
            cout << "cycle doesn't exist" << endl;
            return;
        }

        slow = head;
        if (slow == fast) // special case - whethear slow & fast are already at head. tail -> head
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL; // remove Cycle
        }
        else
        {
            Node *prev = fast;
            while (slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; // Remove cycle
        }
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
    ll.printList();

    ll.tail->next = ll.head;
    ll.isCycle(ll.head);
    ll.removeCycle(ll.head);
    ll.printList();
    /*
    1-->2-->3-->4-->5-->NULL
    Yes, Cycle Exist
    Cycle Existing here..
    1-->2-->3-->4-->5-->NULL
     */

    /*
    📒 - Mathematical approach behind this Slow & Fst Pointer concepts -
    initially distance travelled by slow and fast pointer is equal and the only difference that fast travels 2 times more distance than slow poinyer
    So, after a point when they meet a same point, we set fast to Head which travells x distace extra &
    till that fast travels the loop distance again and dinally meet with slow with the distance diff. of x-y
    */
}
// ____________ ____________ ____________ ____________ ____________
