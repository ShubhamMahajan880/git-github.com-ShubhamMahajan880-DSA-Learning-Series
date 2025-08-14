#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include <map>;
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
using namespace std;

//5) Quns Based on Priority_Queue and Heap - 
//5.1) Nearby K Cars -
/*
- Jab bbhi kuchb Top K values nikalna ho ya selct krna ho to hmesha Priority_Quieue Quns Based on Priority_Queue and Heap - ) kko use kia jaata he.
- qki other sorting alsorithm use krne pr complexity = O(n logn) while in Priority_Queue compelxity is O(k Logn).
- Where k depends on the qun. In the worst case it woulld be equal to n.
 */

// class Car
// {
// public:
//     int idx;
//     int distSq;

//     Car(int idx, int distSq)
//     {
//         this->idx = idx;
//         this->distSq = distSq;
//     }

//     bool operator<(const Car &obj) const // Using Opertor Overloading for the priority_queue
//     {
//         return this->distSq > obj.distSq;
//     }
// };

// void nearByCars(vector<pair<int, int>> pos, int K)
// {
//     vector<Car> cars;

//     for (int i = 0; i < pos.size(); i++) // O(n)
//     {
//         int distsq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
//         cars.push_back(Car(i, distsq));
//     }

//     priority_queue<Car> pq(cars.begin(), cars.end()); // O(n)

//     for (int i = 0; i < K; i++) // O(k*log n + n)
//     {
//         cout << "Car -  " << pq.top().idx << endl;
//         pq.pop(); // O(log n)
//     }
// }

// int main()
// {
//     vector<pair<int, int>> pos;
//     pos.push_back(make_pair(3, 3));
//     pos.push_back(make_pair(5, -1));
//     pos.push_back(make_pair(-2, 4));

//     int K = 2;

//     nearByCars(pos, K);
//     /*
//     int K = 2;
//     Car -  0
//     Car -  2

//     int K = 1;
//     Car -  0
//      */
// }

// ____________ ____________ ____________ ____________ ____________

//5.2) Connect N Ropes -

// int connectNRopes(vector<int> ropes)
// {
//     priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
//     int cost = 0;

//     while (pq.size() > 1)
//     {
//         int min1 = pq.top();
//         pq.pop();

//         int min2 = pq.top();
//         pq.pop();

//         cost += min1 + min2;
//         pq.push(min1 + min2);
//     }

//     cout << "Min Cost - " << cost << endl;
//     return cost;
// }

// int main()
// {
//     vector<int> ropes = {4, 3, 2, 6};
//     connectNRopes(ropes);

//     /*
//     Min Cost - 29

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//5.3) Weakest Soldier -

// class Row
// {
// public:
//     int count; // soldier Count
//     int idx;

//     Row(int count, int idx)
//     {
//         this->count = count;
//         this->idx = idx;
//     }

//     bool operator<(const Row &obj) const // Min Quns Based on Priority_Queue and Heap -  Conditions and Operator Overloading
//     {
//         if (this->count == obj.count)
//         {
//             return this->idx > obj.idx;
//         }
//         return this->count > obj.count;
//     }
// };

// void weakestSoldier(vector<vector<int>> matrix, int K)
// {
//     vector<Row> rows;

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < matrix[i].size() && matrix[i][j] == 1; j++)
//         {
//             count++;
//         }
//         rows.push_back(Row(count, i));
//     }

//     priority_queue<Row> pq(rows.begin(), rows.end());

//     for (int i = 0; i < K; i++)
//     {
//         cout << "Row - " << pq.top().idx << endl;
//         pq.pop();
//     }
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 0, 0, 0},
//                                   {1, 1, 1, 1},
//                                   {1, 0, 0, 0},
//                                   {1, 0, 0, 0}};

//     weakestSoldier(matrix, 3);

//     /*
//     weakestSoldier(matrix, 2);
//     Row - 0
//     Row - 2

//     Row - 0
//     Row - 2
//     Row - 3

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//5.4) Sliding Window Maximum -

// void slidingWindowMax(vector<int> arr, int K)
// {
//     // Max-heap storing {value, index}
//     priority_queue<pair<int, int>> pq;

//     // 1st Window
//     for (int i = 0; i < K; i++)
//     {
//         pq.push({arr[i], i});
//     }
//     cout << "Output: " << pq.top().first << " ";

//     for (int i = K; i < arr.size(); i++)
//     {
//         // Remove elements outside the current window
//         while (!pq.empty() && pq.top().second <= (i - K))
//         {
//             pq.pop();
//         }
//         pq.push({arr[i], i});
//         cout << pq.top().first << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
//     int K = 3;

//     slidingWindowMax(arr, K);
//     /*
//     Output: 3 3 5 5 6 7
//      */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________