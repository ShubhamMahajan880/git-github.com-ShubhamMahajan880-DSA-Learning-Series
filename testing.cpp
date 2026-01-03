#include <bits/stdc++.h>
using namespace std;

// 5) Quns Based on Priority_Queue and Heap -
// 5.1) Nearby K Cars -
/*
- Jab bbhi kuchb Top K values nikalna ho ya selct krna ho to hmesha Priority_Quieue Quns Based on Priority_Queue and Heap - ) kko use kia jaata he.
- qki other sorting alsorithm use krne pr complexity = O(n logn) while in Priority_Queue compelxity is O(k Logn).
- Where k depends on the qun. In the worst case it woulld be equal to n.
 */

class Car
{
public:
    int idx;
    int distSq;

    Car(int idx, int distSq)
    {
        this->idx = idx;
        this->distSq = distSq;
    }
    bool operator<(const Car &obj) const // Using Opertor Overloading for the priority_queue
    {
        return this->distSq > obj.distSq;
    }
};

void nearByCars(vector<pair<int, int>> pos, int K)
{
    vector<Car> cars;
    for (int i = 0; i < pos.size(); i++) // O(n)
    {
        int distsq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
        cars.push_back(Car(i, distsq));
    }
    priority_queue<Car> pq(cars.begin(), cars.end()); // O(n)
    for (int i = 0; i < K; i++)                       // O(k*log n + n)
    {
        cout << "Car -  " << pq.top().idx << endl;
        pq.pop(); // O(log n)
    }
}

int main()
{
    vector<pair<int, int>> pos;
    pos.push_back(make_pair(3, 3));
    pos.push_back(make_pair(5, -1));
    pos.push_back(make_pair(-2, 4));

    int K = 2;

    nearByCars(pos, K);
    /*
    int K = 2;
    Car -  0
    Car -  2

    int K = 1;
    Car -  0
     */
}
