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

class Stack
{
    vector<int> vec;

public:
    void push(int val) // O(1)
    {

        vec.push_back(val);
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty, nothing to pop out here " << endl;
            return;
        }

        vec.pop_back();
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Nothing inside of Stack, how can be get the top " << endl;
            return -1;
        }
        int lastIndex = vec.size() - 1;
        return vec[lastIndex];
    }
};
int main()
{
    Stack s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "So, Stack is - " << endl;

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}