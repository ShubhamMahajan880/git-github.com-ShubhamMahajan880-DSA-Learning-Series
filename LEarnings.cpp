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

int main()
{
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    cout << "The stack is - " << endl;
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    queue<int> q;

    q.push(3);
    q.push(2);
    q.push(1);

    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;
}
