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
// #include<stack>
using namespace std;

// 1) Queue Implementation using LL: -
/*
While implementing the queue using LL - in Queue insertion perfroms from Rear End wich means PushBack inLL
                                    Similarly, in queue deletion perfrom from Front wich means PopFront in LL
                                    and printing of front in Queue measn printing of current head value after pop.
 - In stack we write the elements and get its reverse order because of LIFO, while in Queue we get elements in the same order as we insert because it uses FIFO.
 */

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Queue
// {
//     Node *head;
//     Node *tail;

// public:
//     Queue()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     void push(int data)
//     {

//         Node *newnode = new Node(data);
//         if (head == NULL)
//         {
//             head = tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
//     }

//     int pop()
//     {
//         if (isEmpty())
//         {

//             cout << "Queue is already empty" << endl;
//             return -1;
//         }
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     int front()
//     {
//         if (isEmpty())
//         {
//             cout << "Already Empty Queue" << endl;
//             return -1;
//         }
//         return head->data;
//     }

//     bool isEmpty()
//     {
//         return head == NULL;
//     }
// };

// int main()
// {
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     cout << "Elements of the Queue are - " << endl;
//     while (!q.isEmpty())
//     {
//         cout << q.front() << endl;
//         q.pop();
//     }
//     cout << endl;
//     /*
//     Elements of the Queue are -
//     1
//     2
//     3
//     4 
//      */
// }
// ____________ ____________ ____________ ____________ ____________
