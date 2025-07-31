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
//   class Stack
//   {
//       vector<int> vec;

// public:
//     void push(int val) // O(1)
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

//     int top()
//     {
//         if (isEmpty())
//         {
//             cout << "Nothing inside of Stack, how can be get the top " << endl;
//             return -1;
//         }
//         int lastIndex = vec.size() - 1;
//         return vec[lastIndex];
//     }
// };
// int main()
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

// 2) Stack impmentation usig LL -
//  Case 1 - using STL LL -

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

// 3) Stack in STL -
//  int main()
//  {
//      stack<int> s;
//      s.push(4);
//      s.push(2);
//      s.push(1);
//      s.push(0);

//     cout << "So, using STL our stack is given as - " << endl;
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
//     /*
//     So, using STL our stack is given as -
//     0 1 2 4

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Push at Bottom of the Stack -

// void pushAtBottom(stack<int> &st, int val)
// {
//     if (st.empty())
//     {
//         st.push(val);
//         return;
//     }

//     int temp = st.top();
//     st.pop();

//     pushAtBottom(st, val);

//     st.push(temp);
// }

// void printStack(stack<int> st)
// {
//     // Pass by value to avoid modifying the original stack
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);

//     cout << "So, the current stack is - " << endl;
//     printStack(st); // Just print, don't pop

//     int valueToInsert = 4;

//     pushAtBottom(st, valueToInsert);

//     cout << "After pushing at bottom stack we have is - " << endl;
//     printStack(st);

//     return 0;
//     /*
//     So, the current stack is -
//     3 2 1
//     After pushing at bottom stack we have is -
//     3 2 1 4

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 5) Reverse a string using stack -
//  string reverseString(string str)
//  {
//      string ans;
//      stack<char> s;
//      for (int i = 0; i < str.size(); i++)
//      {
//          s.push(str[i]);
//      }

//     while (!s.empty())
//     {
//         char top = s.top();
//         ans += top;
//         s.pop();
//     }
//     return ans;
// }

// int main()
// {
//     string str = "abcd";
//     cout << "So, the entered string is - " << endl;
//     for (auto i : str)
//     {
//         cout << i;
//     }
//     cout << endl;

//     cout << "and the reverse string is - " << endl;
//     cout << reverseString(str) << endl;
//     /*
//     So, the entered string is -
//     abcd
//     and the reverse string is -
//     dcba
// TC & SC = O(N) - as n elements , so n size stack and n size stack space
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Reverse a  stack using recursion -

// void pushAtBottom(stack<int> &s, int val) // - original stack me ki change na aaye isliye stack ko Reference& ke saath [ass krna jruri he]
// {
//     if (s.empty())
//     {
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtBottom(s, val);
//     s.push(temp);
// }

// void reverseStack(stack<int> &s) // - original stack me ki change na aaye isliye stack ko Reference& ke saath [ass krna jruri he
// {
//     if (s.empty())
//     {
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     reverseStack(s);
//     pushAtBottom(s, temp);
// }

// void printStack(stack<int> s)
// {
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     stack<int> s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     cout << "Correct stack is - " << endl;
//     printStack(s);

//     reverseStack(s);
//     cout << "& the reversed stack is - " << endl;
//     printStack(s);
//     /*
//     Correct stack is -
//     1 2 3 4
//     & the reversed stack is -
//     4 3 2 1

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 7) Stock Spain Problem -

// void storckSpanProblem(vector<int> stock, vector<int> span)
// {
//     stack<int> s;
//     s.push(0);
//     span[0] = 1;

//     for (int i = 1; i < stock.size(); i++)
//     {
//         int currPrice = stock[i];
//         while (!s.empty() && currPrice >= stock[s.top()])
//         {
//             s.pop();
//         }

//         if (s.empty())
//         {
//             span[i] = i + 1;
//         }
//         else
//         {
//             int prevHigh = s.top();
//             span[i] = i - prevHigh;
//         }
//     }
//     for (int i = 0; i < span.size(); i++)
//     {
//         cout << span[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
//     vector<int> span = {0, 0, 0, 0, 0, 0, 0};

//     storckSpanProblem(stock, span);
//     return 0;
//     /*
//     1 1 2 3 4 5 7
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 8) Next Greater Element  -

// void nextGreaterElement(vector<int> arr, vector<int> ans)
// {
//     stack<int> s;
//     int idx = arr.size() - 1;
//     ans[idx] = -1;
//     s.push(arr[idx]);

//     for (idx = idx - 1; idx >= 0; idx--)
//     {
//         int curr = arr[idx];
//         while (!s.empty() && curr >= s.top())
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             ans[idx] = -1;
//         }
//         else
//         {
//             ans[idx] = s.top();
//         }
//         s.push(curr);
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> arr = {6, 8, 0, 1, 3};
//     vector<int> ans(6, 0);

//     nextGreaterElement(arr, ans);
// /*
// 8 -1 1 3 -1 0
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// 9) Valid Paranthesis Problem -

// bool isValidParanthesis(string str)
// {
//     stack<char> st;

//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         if (ch == '(' || ch == '{' || ch == '[') // opening condition
//         {
//             st.push(ch);
//         }
//         else // closing condiiton
//         {
//             if (st.empty()) // if nothing available insode stack
//             {
//                 return false;
//             }

//             // matching paranethiss conditiopn
//             char top = st.top();
//             if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
//             {
//                 st.pop();
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }

//     if (st.empty()) // opening closing se match hone ke baad agr stack empty he to true otherwise false
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     string s1, s2;
//     cout << "Enter the Paranthesis string for val 1  - " << endl;
//     getline(cin, s1);

//     cout << "Enter the Paranthesis string for val 2  - " << endl;
//     getline(cin, s2);

//     cout << isValidParanthesis(s1) << endl;
//     cout << isValidParanthesis(s2) << endl;
//     /*
//     Enter the Paranthesis string for val 1  -
//     ({}}(){})
//     Enter the Paranthesis string for val 2  -
//     [{()}]
//     0
//     1

//     TC - O(n) - only time taken by string characters n
//     SC - O(n) - only space taken for n siz stack
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 10) Duplicate  Paranthesis Problem -

// bool isDuplicate(string str)
// {
//     stack<char> st;

//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         if (ch != ')') // Non-CLosing

//         {
//             st.push(ch);
//         }
//         else // closing
//         {
//             if (st.top() == '(')
//             {
//                 return true; // Duplicate - nothing b/w opening & closing
//             }

//             while (st.top() != '(')
//             {
//                 st.pop();
//             }
//             st.pop();
//         }
//     }
//     return false;
// }

// int main()
// {
//     string s1, s2;
//     cout << "mention the expressions want to check for S1 - " << endl;
//     getline(cin, s1);

//     cout << "mention the expressions want to check for S2 - " << endl;
//     getline(cin, s2);

//     cout << isDuplicate(s1) << endl;
//     cout << isDuplicate(s2) << endl;
//     /*
//     mention the expressions want to check for S1 -
//     ((a+b))
//     mention the expressions want to check for S2 -
//     ((a+b)+(c+d))
//     1
//     0
// TC & SC - O(N)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 11) Max Area in the Histogram  -

// void pritnArray(vector<int> height)
// {
//     for (int i = 0; i < height.size(); i++)
//     {
//         cout << height[i] << " ";
//     }
//     cout << endl;
// }

// void maxAreaHistogram(vector<int> height)
// {
//     int n = height.size();
//     vector<int> nsl(n);
//     vector<int> nsr(n);
//     stack<int> s;

//     // next smaller left
//     nsl[0] = -1;
//     s.push(0);
//     for (int i = 0; i < height.size(); i++)
//     {
//         int curr = height[i];
//         while (!s.empty() && curr <= height[s.top()])
//         {
//             s.pop();
//         }

//         if (s.empty())
//         {
//             nsl[i] = -1;
//         }
//         else
//         {
//             nsl[i] = s.top();
//         }
//         s.push(i);
//     }
//     while ((!s.empty()))
//     {
//         s.pop();
//     }

//     cout << " " << endl;
//     pritnArray(nsl);

//     // next smaller right
//     s.push(n - 1);
//     nsr[n - 1] = n;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         int curr = height[i];
//         while (!s.empty() && curr <= height[s.top()])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             nsr[i] = n; // although it should -1 but for managing the width will consider n
//         }
//         else
//         {
//             nsr[i] = s.top();
//         }
//         s.push(i);
//     }
//     cout << "" << endl;
//     pritnArray(nsr);

//     int maxArea = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int ht = height[i];
//         int width = nsr[i] - nsl[i] - 1;
//         int area = ht * width;

//         maxArea = max(area, maxArea);
//     }
//     cout << "So, finally the max area of Histogram is - " << maxArea << endl;
// }

// int main()
// {
//     vector<int> height = {2, 1, 5, 6, 2, 3};
//     maxAreaHistogram(height);
//     /*

//     -1 -1 1 2 1 4

//     1 6 4 4 6 6
//     So, finally the max area of Histogram is - 10

//      */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________