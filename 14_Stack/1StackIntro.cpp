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
// #include<Stack>
// #include<iterator>
// #include<stack>
using namespace std;

// 1) Stack Implementation using Vector -
//  class Stack
//  {
//      vector<T> vec;

// public:
//     void push(T val) // O(1)
//     {

//         vec.push_back(val);
//     }
//     bool isEmpty()
//     {
//         return vec.size() == 0;
//     }

//     void pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is Empty, nothing to pop out here " << endl;
//             return;
//         }

//         vec.pop_back();
//     }

//     T top()
//     {
//         if (isEmpty())
//         {
//             cout << "Nothing inside of Stack, how can be get the top " << endl;
//             return -1;
//         }
//         T lastIndex = vec.size() - 1;
//         return vec[lastIndex];
//     }
// };
// T main()
// {
//     Stack s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     cout << "So, Stack is - " << endl;

//     while (!s.isEmpty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }
/* O/P  -
So, Stack is -
1 2 3 4

 */
// ____________ ____________

// 1.1) Stack implemtation for any type of Datatype - by using STL library of template<class> T - can any type of datatype is allowed
// template <class T>
// class Stack
// {
//     vector<T> vec;

// public:
//     void push(T val) // O(1)
//     {

//         vec.push_back(val);
//     }
//     bool isEmpty()
//     {
//         return vec.size() == 0;
//     }

//     void pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is Empty, nothing to pop out here " << endl;
//             return;
//         }

//         vec.pop_back();
//     }

//     T top()
//     {
//         // if (isEmpty())
//         // {
//         //     cout << "Nothing inside of Stack, how can be get the top " << endl;
//         //     return -1;
//         // }
//         T lastIndex = vec.size() - 1;
//         return vec[lastIndex];
//     }
// };
// // ------------------- If want to do for char type -
// template <class T>
// class Stack2
// {
//     vector<T> vec;

// public:
//     void push(T val) // O(1)
//     {

//         vec.push_back(val);
//     }
//     bool isEmpty()
//     {
//         return vec.size() == 0;
//     }

//     void pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack2 is Empty, nothing to pop out here " << endl;
//             return;
//         }

//         vec.pop_back();
//     }

//     T top()
//     {
//         // if (isEmpty())
//         // {
//         //     cout << "Nothing inside of Stack, how can be get the top " << endl;
//         //     return -1;
//         // }
//         T lastIndex = vec.size() - 1;
//         return vec[lastIndex];
//     }
// };

// // ------------------- If want to do for String type -

// template <class T>
// class Stack3 {
//     vector<T> vec;

// public:
//     void push(T val) // O(1)
//     {
//         vec.push_back(val);
//     }

//     bool isEmpty() {
//         return vec.size() == 0;
//     }

//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack3 is Empty, nothing to pop out here " << endl;
//             return;
//         }

//         vec.pop_back();
//     }

//     T top() {
//         if (isEmpty()) {
//             cout << "Nothing inside of Stack, how can we get the top " << endl;
//             throw runtime_error("Stack3 is empty");
//         }
//         return vec[vec.size() - 1];
//     }
// };

// int main() {
//     Stack<int> s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     cout << "So, Stack is - " << endl;

//     while (!s.isEmpty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
//     cout << "// -------------------" << endl;

//     /*
//     So, Stack is -
//     1 2 3 4
//     */

//     // Similarly, now if the datatype gets changed - For char

//     Stack2<char> s2;
//     s2.push('d');
//     s2.push('c');
//     s2.push('b');
//     s2.push('a');

//     cout << "So, Stack 2 is - " << endl;

//     while (!s2.isEmpty()) {
//         cout << s2.top() << " ";
//         s2.pop();
//     }
//     cout << endl;
//     cout << "// -------------------" << endl;

//     /*
//     So, Stack 2 is -
//     a b c d
//     */

//     // Similarly, now if the datatype gets changed - For String

//     Stack3<string> s3;
//     s3.push("Google");
//     s3.push("Microsoft");
//     s3.push("Atlassian");
//     s3.push("Amazon");

//     cout << "So, Stack 3 is - " << endl;

//     while (!s3.isEmpty()) {
//         cout << s3.top() << " ";
//         s3.pop();
//     }
//     cout << endl;
//     cout << "// -------------------" << endl;

// /*
// So, Stack 3 is -
// Amazon Atlassian Microsoft Google
// // -------------------
//  */
// }

// ____________ ____________ ____________ ____________ ____________

// Stack impmentation usig LL -
// Case 1 - using STL LL -

// template <class T>
// class Stack
// {
//     Stack<T> ll;

// public:
//     void push(T val)
//     {
//         ll.push_front(val);
//     }

//     void pop()
//     {
//         ll.pop_front();
//     }

//     T top()
//     {
//         return ll.front(); // which is head of LL
//     }

//     bool isEmpty()
//     {
//         return ll.size() == 0;
//     }
// };

// int main()
// {
//     Stack<int> s;

//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     while (!s.isEmpty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// /*
// 1 2 3 4
//  */
// }
// -------------------

// Case 2 - By creating LL manually -

// template <class T>
// class Node
// {
// public:
//     T data;
//     Node *next;

//     Node(T val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// template <class T>
// class Stack
// {
//     Node<T> *head;

// public:
//     Stack()
//     {
//         head = NULL;
//     }

//     void push_front(T val)
//     {
//         Node<T> *newNode = new Node<T>(val);
//         if (head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void pop_front()
//     {
//         Node<T> *temp = head;
//         head = head->next;
//         temp->next = NULL;
//     }

//     T top()
//     {
//         return head->data;
//     }

//     bool isEmpty()
//     {
//         return head == NULL;
//     }
// };

// int main()
// {
//     Stack<int> s;
//     s.push_front(4);
//     s.push_front(3);
//     s.push_front(2);
//     s.push_front(1);

//     cout << "Our Stack is - " << endl;
//     while (!s.isEmpty())
//     {
//         cout << s.top() << " ";
//         s.pop_front();
//     }
//     cout << endl;
// /*
// Our Stack is -
// 1 2 3 4
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// Stack in STL -
int main()
{
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(0);

    cout << "So, using STL our stack is given as - " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    /*
    So, using STL our stack is given as -
    0 1 2 4

     */
}