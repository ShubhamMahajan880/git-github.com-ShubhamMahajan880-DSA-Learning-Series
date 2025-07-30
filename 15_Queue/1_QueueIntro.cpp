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
// #include <queue>
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

// Queue using stack -
// int main()
// {
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout << "SO, the queue using STL is - " << endl;
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     /*
//     SO, the queue using STL is -
//     1 2 3 4
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// Queue using 2 stacks -

// class Queue
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int data) // O(n) - in Linear TIme
//     {
//         // s1->s2
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(data);
//         // s2->s1
//         while (!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }

//     void pop() // O(1) - in Constant TIme
//     {
//         s1.pop();
//     }

//     int front() // O(1) - in Constant TIme
//     {
//         return s1.top();
//     }

//     bool empty()
//     {
//         return s1.empty();
//     }
// };
// int main()
// {
//     Queue q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout << "So, the implmentation if Queue using 2 Stacks is - " << endl;
//     while (!q.empty())
//     {
//         cout << q.front() << endl;
//         q.pop();
//     }
//     /*
//     So, the implmentation if Queue using 2 Stacks is -
//     1
//     2
//     3
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// Stack using 2 Queues -
// class Stack
// {
//     queue<int> q1;
//     queue<int> q2;

// public:
//     void push(int data)
//     {
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.push(data);
//         while (!q2.empty())
//         {
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
//     void pop()
//     {
//         q1.pop();
//     }
//     int top()
//     {
//         return q1.front();
//     }
//     bool empty()
//     {
//         return q1.empty();
//     }
// };

// int main()
// {
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);

//     cout << "So, the stack using 2 queues is - " << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     /*
//     So, the stack using 2 queues is -
//     3
//     2
//     1
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// First Non-Repeating Letter -
// void firstNonRepeating(string s) // TC - O(n), SC - O(n)
// {
//     queue<char> Q;
//     int freq[26] = {0};

//     for (int i = 0; i < s.size(); i++)
//     {
//         char ch = s[i];
//         Q.push(ch);
//         freq[ch - 'a']++;

//         while (!Q.empty() && freq[Q.front() - 'a'] > 1)
//         {
//             Q.pop();
//         }
//         if (Q.empty())
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             cout << Q.front() << endl;
//         }
//     }
// }
// int main()
// {
//     string s;
//     cout << "Enrter the string you want to check foor First Non Repeating Character - " << endl;
//     getline(cin, s);

//     firstNonRepeating(s);
//     /*
//     Enrter the string you want to check foor First Non Repeating Character -
//     naman
//     n
//     n
//     n
//     n
//     m

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//Interleave of 2 Queues -

