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

// void bellmanFord(vector<vector<Edge>> graph, int V, int src) // O(V.E)
// {
//     vector<int> dist(V, INT_MAX);
//     dist[src] = 0;

//     for (int i = 0; i < V - 1; i++) // V
//     {
//         for (int u = 0; u < V; u++) // E
//         {
//             for (Edge e : graph[u])
//             {
//                 if (dist[e.v] > dist[u] + e.wt)
//                 {
//                     dist[e.v] = dist[u] + e.wt;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < V; i++)
//     {
//         cout << dist[i] << " ";
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

//     bellmanFord(graph, V, 0); // 0 2 3 8 6 9
// }

// ____________ ____________ ____________ ____________ ____________

// 12) Minimum SPanning Tree(MST) -
/*
- Spanning Tree is a Tree derived from Graph which are must Connected Graph and includes All the vertex without forming the cycle.
- No. of edges in Spanning Tree = No. of Vertex -1
- Minimum Spannig Tree is  for Undirected Weighted Grapph only.
- A spanning Tree with Minimum weight  is MST.
- For getting MST from Graph there is 2 Algorithms - Prim's Algom & Kruskal's Algom.
 */

//  12.1) Prim's Algorithm -

// class Graph
// {
//     int V;
//     list<pair<int, int>> *l; // int, int : neighbour + wt
//     bool isUndir;

// public:
//     Graph(int V, bool isUndir = true)
//     {
//         this->V = V;
//         l = new list<pair<int, int>>[V];
//         this->isUndir = isUndir;
//     }

//     void addEdge(int u, int v, int wt) // u-->v
//     {
//         l[u].push_back(make_pair(v, wt));
//         if (isUndir)
//         {
//             l[v].push_back(make_pair(u, wt));
//         }
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             cout << u << " : ";
//             for (auto nbr : l[u])
//             {
//                 cout << "(" << nbr.first << ", " << nbr.second << ") ";
//             }
//             cout << endl;
//         }
//     }

//     void primsAlgo(int src)
//     {
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         // (wt,u) -> minHeap
//         vector<bool> mst(V, false);

//         pq.push(make_pair(0, src));
//         int ans = 0;

//         while (pq.size() > 0)
//         {
//             int u = pq.top().second;
//             int wt = pq.top().first;
//             pq.pop();

//             if (!mst[u])
//             {
//                 mst[u] = true;
//                 ans += wt;
//                 list<pair<int, int>> neighbour = l[u];
//                 for (pair<int, int> n : neighbour)
//                 {
//                     int v = n.first;
//                     int currWt = n.second;
//                     pq.push(make_pair(currWt, v));
//                 }
//             }
//         }
//         cout << "final cost of MST = " << ans << endl;
//     }
// };

// int main()
// {
//     Graph graph(4);

//     graph.addEdge(0, 1, 10);
//     graph.addEdge(0, 2, 15);
//     graph.addEdge(0, 3, 30);

//     graph.addEdge(1, 3, 40);

//     graph.addEdge(2, 3, 50);

//     graph.primsAlgo(0); // final cost of MST = 55
// }
// ____________ ____________ ____________ ____________ ____________

// 12.2) - Leetcode 1584 - Min Cost to Connect All Points

class Solution
{
public:
    int MinCostConnectPoints(vector<vector<int>> &points)
    {
        int V = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // (wt,u)

        int src = 0;
        vector<bool> mst(V, false);
        pq.push(make_pair(0, src));
        int minCOst = 0;

        while (pq.size() > 0)
        {
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if (!mst[u])
            {
                mst[u] = true;
                minCOst += cost;

                for (int v = 0; v < V; v++)
                {
                    if (u != v) // u--v
                    {
                        int wt = abs(points[u][0] - points[v][0]) + abs(points[u][1] - points[v][1]);
                        pq.push(make_pair(wt, v));
                    }
                }
            }
        }
        return minCOst;
    }
};