#include <bits/stdc++.h>
using namespace std;

// 2) Complete Binary Tree -
// 2.1) Heap Data Structure -
// 2.1.2) Implementation of Min Heap -

class Heap
{
    vector<int> vec; // max Heap - CBT
public:
    void push(int val) // O(log n)
    {
        vec.push_back(val); // step - 1 Push the val

        // fix heap
        int childIdx = vec.size() - 1; // childIndex
        int parIdx = (childIdx - 1) / 2;

        while (parIdx >= 0 && vec[childIdx] < vec[parIdx]) // O(logn)
        {
            swap(vec[childIdx], vec[parIdx]);
            childIdx = parIdx;
            parIdx = (childIdx - 1) / 2;
        }
    }

    void heapify(int i) // i = parindex
    {
        if (i >= vec.size())
        {
            return;
        }
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int maxIdx = i;
        if (l < vec.size() && vec[l] < vec[maxIdx])
        {
            maxIdx = l;
        }
        if (r < vec.size() && vec[r] < vec[maxIdx])
        {
            maxIdx = r;
        }
        swap(vec[i], vec[maxIdx]);
        if (maxIdx != i)
        {
            heapify(maxIdx);
        }
    }

    void pop()
    {
        // Step - 1
        swap(vec[0], vec[vec.size() - 1]);
        // Step - 2
        vec.pop_back();
        // step - 3
        heapify(0);
    }

    int top()
    {
        return vec[0]; // top of tree(Highest Priority Element) is here the 0-index of vector
    }

    bool empty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    Heap heap2; // Heap Created
    heap2.push(50);
    heap2.push(10);
    heap2.push(100);

    while (!heap2.empty())
    {
        cout << "top iss - " << heap2.top() << endl;
        heap2.pop();
    }

    cout << endl;

    /*
top iss - 10
top iss - 50
top iss - 100
     */

    heap2.push(9);
    heap2.push(4);
    heap2.push(8);
    heap2.push(1);
    heap2.push(2);
    heap2.push(5);
    while (!heap2.empty())
    {
        cout << "top iss - " << heap2.top() << endl;
        heap2.pop();
    }

    cout << endl;
    /*
    top iss - 1
    top iss - 2
    top iss - 4
    top iss - 5
    top iss - 8
    top iss - 9
     */
}
