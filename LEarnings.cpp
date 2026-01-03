#include <bits/stdc++.h>
using namespace std;

// 5) Quns Based on Priority_Queue and Heap -
// 5.2) Sliding Window Maximum -

void slidingWindowMax(vector<int> arr, int K)
{
    // Max-heap storing {value, index}
    priority_queue<pair<int, int>> pq;

    // 1st Window
    for (int i = 0; i < K; i++)
    {
        pq.push({arr[i], i});
    }
    cout << "Output: " << pq.top().first << " ";

    for (int i = K; i < arr.size(); i++)
    {
        // Remove elements outside the current window
        while (!pq.empty() && pq.top().second <= (i - K))
        {
            pq.pop();
        }
        pq.push({arr[i], i});
        cout << pq.top().first << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int K = 3;

    slidingWindowMax(arr, K);
    /*
    Output: 3 3 5 5 6 7
     */
}
