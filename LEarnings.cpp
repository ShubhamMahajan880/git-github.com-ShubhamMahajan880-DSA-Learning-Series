#include <bits/stdc++.h>
using namespace std;

// 3) Stack in STL -
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
