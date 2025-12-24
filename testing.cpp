#include <bits/stdc++.h>
using namespace std;

// 2) STL Queue Functionality -
int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "SO, the queue using STL is - " << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    /*
    SO, the queue using STL is -
    1 2 3 4
     */
}
