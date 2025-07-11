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

// 1) Linked List Introduction & Creation -
/*
📒 The majhor diff. b/w LL & array is of memory location. In an array there is always a Contigious memory locaition
and the next address can be predict easily while in LL no fix for address.
LL me directly kisi  bhi data ko access krna possible nhi he.. yaha linearly hi kr skte he. From Head to destination data.
In aray any  value can be acceswed through the index value or momery address, but in LL can't. Can only be accessed seqquentlialy, starting from head.
 */

// Creating LL -

// class Node // class for Node - which incldues data & next value's add.
// {
// public:
//     int data;
//     Node *next;//pointer

//     Node(int val) // Constructor for the Node class - which inlcudes data's value & next address.
//     {
//         data = val;
//         next = NULL;
//     }
// };
// class List // List class is here for showing the entore LL & Node class is only for crating Node
// {
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val) // pushing new elemnt to the LL
//     {
//         Node *newNode = new Node(val); // dynamic - using new keyword weh know that memory created dynamicallt throughout the fun, and can be accesible from entire emory.
//         // Node* newNode(val); // Static method  to create a new node. Where new created statically where inside the clss only, not accesible for main calss

//         if (head == NULL)
//         {
//             head = tail = newNode; // for single element in LL Head & Tail both are at a place
//         }
//         else
//         {
//             newNode->next = head; // neewNode.next can;t use as will not allow to access
//             head = newNode;
//         }
//     }

//     void push_back(int val)
//     {
//         Node *newNode = new Node(val); // crrating a new ndoe dynamically using New keyword

//         if (head == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void printList()
//     {
//         Node *temp = head; // taking a temporary variable for printing all data of nodes

//         while (temp != NULL)
//         {
//             cout << temp->data << "-->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }

//     void insert(int val, int pos)
//     {
//         Node *newNode = new Node(val);

//         Node *temp = head;
//         for (int i = 0; i < pos - 1; i++)
//         {
//             if (temp == NULL)
//             {
//                 cout << "Possition is Invalid " << endl;
//                 return;
//             }

//             temp = temp->next;
//         }

//         // temp is now at pos 1 - prev/left
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
// };

// int main()
// {
//     List ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList(); // 1-->2-->3-->NULL

//     ll.push_back(4);
//     ll.push_back(5);
//     ll.printList(); // 1-->2-->3-->4-->5-->NULL

//     ll.insert(100, 2);
//     ll.printList(); // 1-->2-->100-->3-->4-->5-->NULL

//     ll.insert(100, 25);
//     ll.printList();
//     /*
// Possition is Invalid
// 1-->2-->100-->3-->4-->5-->NULL
//      */
// }
// ____________ ____________

// 1.2) Deletion in LL -
/*
-  For the deletion, as Node created dynamically using new keyword, so need to delete it explicitely by using destructor
- Pehle List se Head delete hone jayga, phr head pr jo memory he node ki vaha delete krne jaayga, agar uaka next bhi nuull nhi h to vaha jaayga
 */
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

//     ~Node()
//     { // Destructor for deleting the Node
//         cout << "Then Node Destructor called for data " << data << endl;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };

// class List
// {
//     Node *head;
//     Node *tail;

// public:
//     List()
//     { // constructor created for the class List
//         head = NULL;
//         tail = NULL;
//     }

//     ~List()
//     { // destructor for deleting the class praramters
//         cout << "First Head Destructor Called" << endl;
//         if (head != NULL)
//         {
//             delete head;
//         }
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         if (head == NULL)
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
//
// };

// int main()
// {
//     List ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();
//     /*
//     1-->2-->3-->NULL
//     First Head Destructor Called
//     Then Node Destructor called for data 1
//     Then Node Destructor called for data 2
//     Then Node Destructor called for data 3
//      */
// }
// -------------------
// Pop_back & Pop_front in LL -
// Pop front - deleting the first head node only
/*
As heead in nide dynamically allocatd so will deletd also dynamically differrntly
 */

//  Pop back - deleting the last Node(tail) only  - will create temp variable just before the tail and delete the tail

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
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         if (head == NULL)
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

//     void pop_front() // Deleting the First Node(Head)
//     {
//         if (head == NULL)
//         {
//             cout << "LL is Empty Alrady" << endl;
//             return;
//         }
//         Node *temp = head;
//         head = head->next;

//         temp->next = NULL;
//         delete temp;
//     }

//     void pop_back()// Deleting the Last Node(Tail)
//     {
//         Node *temp = head;
//         while (temp->next->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = NULL; // temp - it's tail's previous val
//         delete tail;
//         tail = temp;
//     }
// };

// int main()
// {
//     List ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();

//     ll.pop_front();
//     ll.printList();
//     /*
//     1-->2-->3-->NULL
//     2-->3-->NULL
//      */
//     ll.pop_back();
//     ll.printList();
//     /*
//     2-->3-->NULL
//     2-->NULL
//      */
// }
// ____________ ____________

// 2) Iterative Search in LL -

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
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         if (head == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

// void printList()
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "-->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

//     int searchItr(int key) // searching for the respetive key
//     {
//         Node *temp = head;
//         int idx = 0;

//         while (temp != NULL)
//         {
//             if (temp->data == key)
//             {
//                 return idx;
//             }
//             temp = temp->next;
//             idx++;
//         }
//         return -1;
//     }
// };

// int main()
// {
//     int key;
//     List ll;
//     ll.push_front(5);
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();
//     cout << "What value you want to search in this key " << endl;
//     cin >> key;
//     cout << ll.searchItr(key) << endl;
//     /*
//     What value you want to search in this key
//     5
//     4

//     1-->2-->3-->4-->5-->NULL
//     What value you want to search in this key
//     2
//     1

//     1-->2-->3-->4-->5-->NULL
//     What value you want to search in this key
//     23
//     -1

//      */
// }
// ____________ ____________

// 2.2) Recursive Search in LL -

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
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         if (head == NULL)
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

//     // Searching throug Recursive Call -

//     int helper(Node *temp, int key)
//     {
//         if (temp == NULL)
//         {
//             return -1; // data doesn't exist
//         }
//         if (temp->data == key)
//         {
//             return 0;
//         }
//         int idx = helper(temp->next, key);
//         {
//             if (idx == -1)
//             {
//                 return -1;
//             }
//             return idx + 1;
//         }
//     }

//     int searchRecursion(int key)
//     {
//         return helper(head, key);
//     }
// };

// int main()
// {
//     int key;
//     List ll;
//     ll.push_front(5);
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();
//     cout << "Waht you want to search in this created Linked List - " << endl;
//     cin >> key;
//     cout << ll.searchRecursion(key) << endl;
// /*
// 1-->2-->3-->4-->5-->NULL
// Waht you want to search in this created Linked List -
// 3
// 2
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// 3) Reverse a LinkedList -

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
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);
//         if (head == NULL)
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

//     void Reverse()
//     {
//         Node *curr = head;
//         Node *prev = NULL;
//         tail = head;
//         while (curr != NULL)
//         {
//             Node *next = curr->next;
//             curr->next = prev;

//             // Updations  for next Itr
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
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
//     ll.printList();//1-->2-->3-->4-->5-->NULL

//     ll.Reverse();
//     ll.printList();//5-->4-->3-->2-->1-->NULL
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Find & Remove Nth Node from LL -
/*
📒 - For remove cyclee iscycle is also importaant becuase first check for the cycle that cycle actually exist in the LL or not.
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
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
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

    int getSize()
    {
        int sz = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void removeNth(int n) // TC - O(n) , Sc - O(1)
    {
        int size = getSize();
        Node *prev = head;
        for (int i = 1; i < (size - n); i++) // i=size-n => prev => deletion node previous
        {
            prev = prev->next;
        }

        Node *toDel = prev->next;
        cout << "Going to Delete: " << toDel->data << endl;

        prev->next = prev->next->next;
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

    ll.removeNth(3);
    ll.printList();

    /*
    Going to Delete: 3
    1-->2-->4-->5-->NULL
    */
}
// ____________ ____________ ____________ ____________ ____________
