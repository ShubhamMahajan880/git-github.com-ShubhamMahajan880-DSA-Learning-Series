#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int currSize, n;
    int f, r;

public:
    CircularQueue(int size)
    {
        n = size;
        arr = new int[n];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data)
    {
        if (currSize == n)
        {
            cout << "CQ is FULL" << endl;
            return;
        }
        r = (r + 1) % n;
        arr[r] = data;
        currSize++;
    }

    void pop()
    {
        if (empty())
        {
            cout << "CQ is Already Empty " << endl;
            return;
        }
        f = (f + 1) % n;
        currSize--;
    }

    int front()
    {
        if (empty())
        {
            cout << "CQ is Already Empty " << endl;
            return 0;
        }
        return arr[f];
    }

    bool empty()
    {
        return currSize == 0;
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
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    cq.printArray(); // 4 2 3
    cout << endl;

    while (!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl; // 2 3 4
}
