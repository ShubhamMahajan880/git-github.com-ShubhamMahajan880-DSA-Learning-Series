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

// 10) Dijkstra's ALgorithms -
/*
Algorithm uses for slelecting mminimum weight for src to destntion. Tihis algorithm can only implement for possitive weights.
& Implementation of Dijktra's algo using Edge List method
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

// class Solution
// {
// public:
//     int MinCostConnectPoints(vector<vector<int>> &points)
//     {
//         int V = points.size();
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         // (wt,u)

//         int src = 0;
//         vector<bool> mst(V, false);
//         pq.push(make_pair(0, src));
//         int minCost = 0;

//         while (!pq.empty())
//         {
//             int u = pq.top().second;
//             int cost = pq.top().first;
//             pq.pop();

//             if (!mst[u])
//             {
//                 mst[u] = true;
//                 minCost += cost;

//                 for (int v = 0; v < V; v++)
//                 {
//                     if (u != v) // u--v
//                     {
//                         int wt = abs(points[u][0] - points[v][0]) + abs(points[u][1] - points[v][1]);
//                         pq.push(make_pair(wt, v));
//                     }
//                 }
//             }
//         }
//         return minCost;
//     }
// };

// int main()
// {
//     Solution sol;

//     vector<vector<int>> points1 = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};
//     cout << "Min Cost (Example 1): " << sol.MinCostConnectPoints(points1) << "\n";

//     vector<vector<int>> points2 = {{3, 12}, {-2, 5}, {-4, 1}};
//     cout << "Min Cost (Example 2): " << sol.MinCostConnectPoints(points2) << "\n";

//     /*
//     Min Cost (Example 1): 20
//     Min Cost (Example 2): 18
//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 13) Leetcode Qun 787 - Cheapest Flight Within K Stops -

// class Solution
// {
// public:
//     class Info
//     {
//     public:
//         int u;
//         int cost;
//         int stops; // src to u

//         Info(int u, int cost, int stops)
//         {
//             this->u = u;
//             this->cost = cost;
//             this->stops = stops;
//         }
//     };

//     int findCheapestPrice(int V, vector<vector<int>> &flights, int src, int dst, int k)
//     {
//         // Build adjacency list: u -> {v, wt}
//         vector<vector<pair<int, int>>> adj(V);
//         for (auto &f : flights)
//         {
//             adj[f[0]].push_back({f[1], f[2]});
//         }

//         queue<Info> q;
//         vector<int> dist(V, INT_MAX);

//         dist[src] = 0;
//         q.push(Info(src, 0, 0));

//         while (!q.empty())
//         {
//             Info curr = q.front();
//             q.pop();

//             if (curr.stops > k)
//                 continue;

//             // <- changed: avoid C++17 structured bindings to keep compatibility
//             for (auto &p : adj[curr.u])
//             {
//                 int v = p.first;
//                 int wt = p.second;

//                 if (curr.cost + wt < dist[v] && curr.stops <= k)
//                 {
//                     dist[v] = curr.cost + wt;
//                     q.push(Info(v, dist[v], curr.stops + 1));
//                 }
//             }
//         }

//         return (dist[dst] == INT_MAX) ? -1 : dist[dst];
//     }
// };

// int main()
// {
//     Solution sol;

//     int V1 = 4;
//     vector<vector<int>> flights1 = {
//         {0, 1, 100}, {1, 2, 100}, {2, 3, 100}, {0, 2, 500}};
//     int src1 = 0, dst1 = 3, k1 = 1;

//     cout << "Cheapest Price (Example 1): "
//          << sol.findCheapestPrice(V1, flights1, src1, dst1, k1) << "\n";

//     int V2 = 3;
//     vector<vector<int>> flights2 = {
//         {0, 1, 100}, {1, 2, 100}, {0, 2, 500}};
//     int src2 = 0, dst2 = 2, k2 = 1;

//     cout << "Cheapest Price (Example 2): "
//          << sol.findCheapestPrice(V2, flights2, src2, dst2, k2) << "\n";

//     /*
//     Cheapest Price (Example 1): 600
//     Cheapest Price (Example 2): 200
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 14) Disjoint Set/UnionFind Data Structure -

// class DisjointSet
// {
// public:
//     int n;
//     vector<int> par;
//     vector<int> rank;

//     DisjointSet(int n)
//     {
//         this->n = n;

//         for (int i = 0; i < n; i++)
//         {
//             par.push_back(i);
//             rank.push_back(0);
//         }
//     }

//     int find(int x)
//     {
//         if (par[x] == x)
//         {
//             return x;
//         }

//         return par[x] = find(par[x]);//Path COmpression Optimization
//     }

//     int unionByRank(int a, int b)
//     {
//         int parA = find(a);
//         int parB = find(b);

//         if (rank[parA] == rank[parB])
//         {
//             par[parB] = parA;
//             rank[parA]++;
//         }
//         else if (rank[parA] > rank[parB])
//         {
//             par[parB] = parA;
//         }
//         else
//         {
//             par[parA] = parB;
//         }
//     }

//     void getInfo()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << i << ": " << par[i] << ", " << rank[i] << endl;
//         }
//     }
// };

// int main()
// {
//     DisjointSet dj(6);
//     dj.unionByRank(0, 2);
//     cout << dj.find(2) << endl;

//     dj.unionByRank(1, 3);
//     dj.unionByRank(2, 5);
//     dj.unionByRank(0, 3);
//     cout << dj.find(2) << endl;

//     dj.unionByRank(0, 4);
//     /*
//     0
//     0
//     */

//     dj.getInfo();
//     /*

// 0: 0, 2
// 1: 1, 1
// 2: 0, 0
// 3: 1, 0
// 4: 0, 0
// 5: 0, 0

//      */
// }

// ____________ ____________ ____________ ____________ ____________

// 15) Kruskal's ALgorithms -

// class Edge // O(ElogE)
// {
// public:
//     int u;
//     int v;
//     int wt;

//     Edge(int u, int v, int wt)
//     {
//         this->u = u;
//         this->v = v;
//         this->wt = wt;
//     }
// };
// class Graph
// {
// public:
//     vector<Edge> edges;
//     int V;
//     vector<int> par;
//     vector<int> rank;

//     Graph(int V)
//     {
//         this->V = V;

//         for (int i = 0; i < V; i++)
//         {
//             par.push_back(i);
//             rank.push_back(0);
//         }
//     }
//     int find(int x)
//     {
//         if (par[x] == x)
//         {
//             return x;
//         }

//         return par[x] = find(par[x]);
//     }

//     void unionByRank(int u, int v)
//     {
//         int parU = find(u);
//         int parV = find(v);

//         if (rank[parU] == rank[parV])
//         {
//             par[parV] = parU;
//             rank[parU]++;
//         }
//         else if (rank[parU] > rank[parV])
//         {
//             par[parV] = parU;
//         }
//         else
//         {
//             par[parU] = parV;
//         }
//     }

//     void addEdge(int u, int v, int wt)
//     {
//         edges.push_back(Edge(u, v, wt));
//     }

//     void kruskals()
//     {
//         sort(edges.begin(), edges.end(), [](Edge &a, Edge &b)
//              { return a.wt < b.wt; }); // used Lambda Function
//         int minCost = 0;
//         int count = 0;

//         for (int i = 0; i < edges.size() && count < V - 1; i++)
//         {
//             Edge e = edges[i];

//             int parU = find(e.u);
//             int parV = find(e.v);
//             if (parU != parV) // No Cycle Edge
//             {
//                 unionByRank(parU, parV);
//                 minCost += e.wt;
//                 count++;
//             }
//         }

//         cout << "Minimum Cost: " << minCost << endl;
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
//     graph.kruskals(); // Minimum Cost: 55
// }
// ____________ ____________ ____________ ____________ ____________

// 16) Flood Fill ALgorithms - Leetcode Qun - 733 -

class Solution
{
public:
    void dfs(int row, int col, int n, int m, vector<vector<int>> &image, vector<vector<bool>> &vis, int newColor, int oldColor)
    {
        vis[row][col] = true;
        image[row][col] = newColor;

        // Up
        if (row - 1 >= 0 && !vis[row - 1][col] && image[row - 1][col] == oldColor)
        {
            dfs(row - 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Down
        if (row + 1 < n && !vis[row + 1][col] && image[row + 1][col] == oldColor)
        {
            dfs(row + 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Left
        if (col - 1 >= 0 && !vis[row][col - 1] && image[row][col - 1] == oldColor)
        {
            dfs(row, col - 1, n, m, image, vis, newColor, oldColor);
        }

        // Right
        if (col + 1 < m && !vis[row][col + 1] && image[row][col + 1] == oldColor)
        {
            dfs(row, col + 1, n, m, image, vis, newColor, oldColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int n = image.size();
        int m = image[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int oldColor = image[sr][sc];

        if (oldColor == newColor) // no need to fill
            return image;

        dfs(sr, sc, n, m, image, vis, newColor, oldColor);
        return image;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};

    int sr = 1, sc = 1, newColor = 2;

    vector<vector<int>> result = sol.floodFill(image, sr, sc, newColor);

    cout << "Flood filled image:\n";
    for (auto &row : result)
    {
        for (auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << "\n";
    }

    /*
Flood filled image:
2 2 2
2 2 0
2 0 1
     */
}

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________