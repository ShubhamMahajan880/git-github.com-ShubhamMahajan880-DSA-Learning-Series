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
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
// #include <map>;
// #include <set>;
// #include<unordered_map>
// #include<unordered_set>using namespace std;
using namespace std;

// 10) Dijkstra's ALgorithms - Algorithm uses for slelecting mminimum weight for src to destntion. Tihis algorithm can only implement for possitive weights.
// Implementation of Dijktra's algo using Edge List method

// class Edge
// {
// public:
//     int v;
//     int wt;

//     Edge(int v, int wt)
//     {
//         this->v = v;
//         this->wt = wt;
//     }
// };

// void dijkstra(int src, vector<vector<Edge>> graph, int V)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min heap creation
//     // pair(dist[v], v);
//     vector<int> dist(V, INT_MAX);

//     pq.push(make_pair(0, src));
//     dist[src] = 0;

//     while (pq.size() > 0)
//     {
//         int u = pq.top().second;
//         pq.pop();

//         vector<Edge> edges = graph[u];
//         for (Edge e : edges) // e.v, e.wt
//         {
//             if (dist[e.v] > dist[u] + e.wt)
//             {
//                 dist[e.v] = dist[u] + e.wt;
//                 pq.push(make_pair(dist[e.v], e.v));
//             }
//         }
//     }
//     for (int d : dist)
//     {
//         cout << d << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int V = 6;
//     vector<vector<Edge>> graph(V);

//     graph[0].push_back(Edge(1, 2)); // (destintn,weight)
//     graph[0].push_back(Edge(2, 4));

//     graph[1].push_back(Edge(2, 1));
//     graph[1].push_back(Edge(3, 7));

//     graph[2].push_back(Edge(4, 3));

//     graph[3].push_back(Edge(5, 1));

//     graph[4].push_back(Edge(3, 2));
//     graph[4].push_back(Edge(2, 5));

//     dijkstra(0, graph, V);//0 2 3 8 6 9
//     dijkstra(1, graph, V);//2147483647 0 1 6 4 7
// }
// ____________ ____________ ____________ ____________ ____________

// 11) Bellman Ford Algorithm -
/*
Why Bellman Ford Algo for V-1 times - Because we're ensuring that the longest path without the cycle..
For V nodes there will be V-1 Edges.
 */

class Edge
{
public:
    int v;
    int wt;

    Edge(int v, int wt)
    {
        this->v = v;
        this->wt = wt;
    }
};

void bellmanFord(vector<vector<Edge>> graph, int V, int src) // O(V.E)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++) // V
    {
        for (int u = 0; u < V; u++) // E
        {
            for (Edge e : graph[u])
            {
                if (dist[e.v] > dist[u] + e.wt)
                {
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}
int main()
{
    int V = 6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2)); // (destintn,weight)
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));

    bellmanFord(graph, V, 0);//0 2 3 8 6 9 

}