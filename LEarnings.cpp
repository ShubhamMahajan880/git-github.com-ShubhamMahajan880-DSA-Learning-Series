#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <deque>
using namespace std;

// Circular Queue -
class circularQueue
{
    int *arr;
    int currSize, n;
    int f, r;

public:
    circularQueue(int size)
    {
        n = size;
        f = 0;
        r = -1;
        currSize = 0;
        arr = new int[n];
    }

    void push(int data)
    {
        if (currSize == n)
        {
            cout << "CQ is already full - " << endl;
            return;
        }
        r = (r + 1) % n;
        arr[r] = data;
        currSize++;
    }
    bool isempty()
    {
        return currSize == 0;
    }
    void pop()
    {
        if (isempty())
        {
            cout << "There is Nothng to pop as CQ is empty" << endl;
        }
        f = (f + 1) % n;
        currSize--;
    }

    int front()
    {
        if (isempty())
        {
            cout << "There is nothing to print as queue is empty - " << endl;
            return 0;
        }
        return arr[f];
    }

    void printArray()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    circularQueue cq(5);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.push(6);

    cq.printArray();
    cout << endl;

    cq.push(6);
    
    cout << endl;

    while (!cq.isempty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    
}
