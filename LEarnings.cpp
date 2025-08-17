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

struct ComparePair
{
    bool operator()(pair<string, int> &p1, pair<string, int> &p2)
    {
        return p1.second > p2.second;
    }
};
int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;

    pq.push(make_pair("Aavu", 56));
    pq.push(make_pair("Chaitanya", 78));
    pq.push(make_pair("Bhamini", 12));

    while (!pq.empty())
    {
        cout << "Top is - " << pq.top().first << "," << pq.top().second << endl;
        pq.pop();
    }
}
