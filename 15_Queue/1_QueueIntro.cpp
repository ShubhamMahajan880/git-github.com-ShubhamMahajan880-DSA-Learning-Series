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
// #include <deque>
using namespace std;

//1) Queue Implementation using LL: -
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

//2) STL Queue Functionality -
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

//3) Queue using 2 stacks -

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

//3.1) Stack using 2 Queues -

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

//4) First Non-Repeating Letter -
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

//5) Interleave of 2 Queues -

// void interleave(queue<int> &org) // usign STL it generally pases by value but here i am passing by reference fir making the changes in the actual/original queue
// {
//     int n = org.size();
//     queue<int> first;

//     for (int i = 0; i < n / 2; i++)
//     {
//         first.push(org.front());
//         org.pop();
//     }
//     while (!first.empty())
//     {
//         org.push(first.front());
//         first.pop();

//         org.push(org.front());
//         org.pop();
//     }
// }
// int main()
// {
//     queue<int> org;
//     for (int i = 1; i <= 10; i++)
//     {
//         org.push(i);
//     }
//     interleave(org);

//     for (int i = 1; i <= 10; i++)
//     {
//         cout << org.front() << " ";
//         org.pop();
//     }
//     cout << endl;
//     /*
//     1 6 2 7 3 8 4 9 5 10
//     TC - O(n) & SC - O(n)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

//6) Reverse a Queue -

// void reverse(queue<int> &q)
// {
//     stack<int> s;

//     while (!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }

//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
// }
// int main()
// {
//     queue<int> q;
//     for (int i = 1; i <= 5; i++)
//     {
//         q.push(i);
//     }
//     reverse(q);

//     // Printing reversed queue elements -
//     cout << "So, queue reversal is - " << endl;
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     /*
//     So, queue reversal is -
//     5 4 3 2 1

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//7) Deque[Double Ended Queue] concept in Queue -

// int main()
// {
//     deque<int> deq;

//     deq.push_front(2);
//     deq.push_front(1);

//     deq.push_back(3);
//     deq.push_back(4);

//     cout << "Deque contents: ";
//     for (auto i : deq)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     // Deque contents: 1 2 3 4

//     deq.pop_front();
//     deq.pop_back();
//     cout << deq.front() << endl; // 2
//     cout << deq.back() << endl;  // 3
// }
// ____________ ____________

//7.1)  Queue using Deque -

// class Queue
// {
//     deque<int> deq;

// public:
//     void push(int data)
//     {
//         deq.push_back(data);
//     }

//     void pop()
//     {
//         deq.pop_front();
//     }

//     int front()
//     {
//         return deq.front();
//     }

//     bool empty()
//     {
//         return deq.empty();
//     }
// };
// int main()
// {
//     Queue q;

//     for (int i = 1; i <= 5; i++)
//     {
//         q.push(i);
//     }

//     for (int i = 1; i <= 5; i++)
//     {
//         cout << q.front() << endl;
//         q.pop();
//     }
//     /*
//     1
//     2
//     3
//     4
//     5
//      */
// }
// ____________ ____________ ____________ ____________ ____________

//7.2) Stack using Deque -

// class Stack
// {
//     deque<int> deq;

// public:
//     void push(int data)
//     {
//         deq.push_front(data);
//     }
//     void pop()
//     {
//         deq.pop_front();
//     }
//     int top()
//     {
//         return deq.front();
//     }
// };
// int main()
// {
//     Stack s;

//     // taking elements for stack -
//     for (int i = 1; i <= 5; i++)
//     {
//         s.push(i);
//     }

//     for (int i = 1; i <= 5; i++)
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }
//     /*
//     5
//     4
//     3
//     2
//     1

//      */
// }

// -------------------

//7.2.2) Stack using Deque for Method - 2 -

// class Stack
// {
//     deque<int> deq;

// public:
//     void push(int data)
//     {
//         deq.push_back(data);
//     }

//     bool isempty()
//     {
//         return deq.empty();
//     }
//     void pop()
//     {
//         if (isempty())
//         {
//             return;
//         }
//         deq.pop_back();
//     }

//     int top()
//     {
//         if (isempty())
//         {
//             cout << "nthing inside stack, how can be on top" << endl;
//             return 0;
//         }
//         return deq.back();
//     }
// };

// int main()
// {
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);

//     while (!s.isempty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }
// ____________ ____________ ____________ ____________ ____________

//8) Circular Queue Implementations using Array -

// class CircularQueue
// {
//     int *arr;
//     int currSize, n;
//     int f, r;

// public:
//     CircularQueue(int size)
//     {
//         n = size;
//         arr = new int[n];
//         currSize = 0;
//         f = 0;
//         r = -1;
//     }

//     void push(int data)
//     {
//         if (currSize == n)
//         {
//             cout << "CQ is FULL" << endl;
//             return;
//         }
//         r = (r + 1) % n;
//         arr[r] = data;
//         currSize++;
//     }

//     void pop()
//     {
//         if (empty())
//         {
//             cout << "CQ is Already Empty " << endl;
//             return;
//         }
//         f = (f + 1) % n;
//         currSize--;
//     }

//     int front()
//     {
//         if (empty())
//         {
//             cout << "CQ is Already Empty " << endl;
//             return 0;
//         }
//         return arr[f];
//     }

//     bool empty()
//     {
//         return currSize == 0;
//     }

//     void printArray()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     CircularQueue cq(3);

//     cq.push(1);
//     cq.push(2);
//     cq.push(3);
//     cq.pop();
//     cq.push(4);

//     cq.printArray(); // 4 2 3
//     cout << endl;

//     while (!cq.empty())
//     {
//         cout << cq.front() << " ";
//         cq.pop();
//     }
//     cout << endl;// 2 3 4 
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________