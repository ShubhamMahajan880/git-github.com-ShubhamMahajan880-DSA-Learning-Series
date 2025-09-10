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

// 1) Graph Creation -
/*
For Undirected Graph only
 */
// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Graph graph(5);

//     graph.addEdge(0, 1);
//     graph.addEdge(1, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 3);
//     graph.addEdge(2, 4);

//     graph.printGraph();

//     /*
//     0 : 1
//     1 : 0 2 3
//     2 : 1 3 4
//     3 : 1 2
//     4 : 2

//      */
// }

// ____________ ____________

// 1.1) For Directed/Undirected both Graph -

// class Graph
// {
//     int V;
//     list<int> *l;
//     bool isUndir;

// public:
//     Graph(int V, bool isUndir = true)
//     {
//         this->V = V;
//         l = new list<int>[V];
//         this->isUndir = isUndir;
//     }

//     void addEdge(int u, int v) // u-->v
//     {
//         l[u].push_back(v);
//         if (isUndir) // false
//         {
//             l[v].push_back(u);
//         }
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     // Directed Graph
//     Graph graph(4, false);
//     graph.addEdge(1, 0);
//     graph.addEdge(0, 2);
//     graph.addEdge(2, 3);
//     graph.addEdge(3, 0);

//     graph.printGraph();
// }
// ____________ ____________

// 1.2) Weighted Graph for Directed and Undirected Graph -

// class Graph
// {
//     int V;
//     list<pair<int, int>> *l; // adjacency list stores (neighbor, weight)

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<pair<int, int>>[V];
//     }

//     void addEdge(int u, int v, int wt) // u -- v with weight
//     {
//         l[u].push_back({v, wt});
//         l[v].push_back({u, wt}); // undirected graph
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
// };

// int main()
// {
//     Graph graph(5);

//     graph.addEdge(0, 1, 10);
//     graph.addEdge(1, 2, 5);
//     graph.addEdge(1, 3, 8);
//     graph.addEdge(2, 3, 3);
//     graph.addEdge(2, 4, 7);

//     graph.printGraph();

//     /*
//     Expected Output:
//     0 : (1, 10)
//     1 : (0, 10) (2, 5) (3, 8)
//     2 : (1, 5) (3, 3) (4, 7)
//     3 : (1, 8) (2, 3)
//     4 : (2, 7)
//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Graph Traversal Techniques -
// 2.1) BFS Implementation on Graph -

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     void BFS() // O(V+E)
//     {
//         queue<int> q;
//         vector<bool> vis(V, false);
//         q.push(0);
//         vis[0] = true;

//         while (q.size() > 0)
//         {
//             int u = q.front(); // current vertex
//             q.pop();
//             cout << u << " ";

//             list<int> neighbors = l[u]; // u--v
//             for (int v : neighbors)
//             {
//                 if (!vis[v])
//                 {
//                     vis[v] = true;
//                     q.push(v);
//                 }
//             }
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Graph graph(7);

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 4);
//     graph.addEdge(3, 4);
//     graph.addEdge(3, 5);
//     graph.addEdge(4, 5);
//     graph.addEdge(5, 6);

//     graph.BFS(); // 0 1 2 3 4 5 6

// }
// ____________ ____________ ____________ ____________ ____________

// 2.2) DFS Implementation on Graph -

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     void DFSHelper(int u, vector<bool> &vis) // O(V+E)
//     {
//         vis[u] = true;
//         cout << u << " ";

//         list<int> neighbors = l[u];
//         for (int v : neighbors)
//         {
//             if (!vis[v])
//             {
//                 DFSHelper(v, vis);
//             }
//         }
//     }

//     void DFS()
//     {
//         vector<bool> vis(7, false);
//         DFSHelper(0, vis);
//         cout << endl;
//     }
// };

// int main()
// {
//     Graph graph(7);

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 4);
//     graph.addEdge(3, 4);
//     graph.addEdge(3, 5);
//     graph.addEdge(4, 5);
//     graph.addEdge(5, 6);

//     graph.BFS(); // 0 1 2 3 4 5 6
//     graph.DFS(); // 0 1 3 4 2 5 6
// }
// ____________ ____________ ____________ ____________ ____________

// 3) HasPath Problem -
//  Using DFS -since its using DFS or working on the logic of DFS..so TC - O(V+E)

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     bool pathHelper(int src, int dest, vector<bool> &vis)
//     {
//         if (src == dest)
//         {
//             return true;
//         }

//         vis[src] = true;
//         list<int> neighbors = l[src];

//         for (int v : neighbors)
//         {
//             if (!vis[v])
//             {
//                 if (pathHelper(v, dest, vis))
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

//     bool hasPath(int src, int dest)
//     {
//         vector<bool> vis(V, false);
//         return pathHelper(src, dest, vis);
//     }
// };

// int main()
// {
//     Graph graph(7);

//     // graph.addEdge(0, 1);
//     // graph.addEdge(0, 2);
//     // graph.addEdge(1, 3);
//     // graph.addEdge(2, 4);
//     // graph.addEdge(3, 4);
//     // graph.addEdge(3, 5);
//     // graph.addEdge(4, 5);
//     // graph.addEdge(5, 6);

//     // cout << graph.hasPath(0, 5) << endl;//1

//     // Now we're deleting the vertex with edge to check it.

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 4);
//     graph.addEdge(3, 4);
//     graph.addEdge(3, 5);
//     graph.addEdge(4, 5);
//     // graph.addEdge(5, 6);
//     cout << graph.hasPath(5, 6) << endl; // 0
// }
// -------------------

// Using BFS -

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     // BFS to check if path exists and also reconstruct it
//     bool hasPath(int src, int dest, vector<int> &path)
//     {
//         vector<bool> vis(V, false);
//         vector<int> parent(V, -1); // store parent of each node
//         queue<int> q;

//         q.push(src);
//         vis[src] = true;

//         while (!q.empty())
//         {
//             int u = q.front();
//             q.pop();

//             if (u == dest)
//             {
//                 // Reconstruct path
//                 int cur = dest;
//                 while (cur != -1)
//                 {
//                     path.push_back(cur);
//                     cur = parent[cur];
//                 }
//                 reverse(path.begin(), path.end());
//                 return true;
//             }

//             for (int v : l[u])
//             {
//                 if (!vis[v])
//                 {
//                     vis[v] = true;
//                     parent[v] = u;
//                     q.push(v);
//                 }
//             }
//         }

//         return false;
//     }
// };

// int main()
// {
//     Graph graph(7);

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 4);
//     graph.addEdge(3, 4);
//     graph.addEdge(3, 5);
//     graph.addEdge(4, 5);
//     graph.addEdge(5, 6);

//     vector<int> path;

//     if (graph.hasPath(0, 6, path))
//     {
//         cout << "Path exists: ";
//         for (int node : path)
//             cout << node << " ";
//         cout << endl;
//     }
//     else
//     {
//         cout << "No path exists" << endl;
//     }
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Disconnected Components OR Diconneted Graph -
// using DFS Traversal -

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     void DFSHelper(int u, vector<bool> &vis) // O(V+E)
//     {
//         vis[u] = true;
//         cout << u << " ";

//         list<int> neighbors = l[u];
//         for (int v : neighbors)
//         {
//             if (!vis[v])
//             {
//                 DFSHelper(v, vis);
//             }
//         }
//     }

//     void DFS()
//     {
//         vector<bool> vis(V, false);
//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 DFSHelper(i, vis); // Starting Point = i;
//                 cout << endl;
//             }
//         }

//         cout << endl;
//     }
// };

// int main()
// {
//     Graph graph(10);

//     graph.addEdge(0, 2);
//     graph.addEdge(2, 5);
//     graph.addEdge(1, 6);
//     graph.addEdge(6, 4);
//     graph.addEdge(4, 3);
//     graph.addEdge(4, 9);
//     graph.addEdge(3, 7);
//     graph.addEdge(3, 8);

//     graph.DFS(); // 0 1 3 4 2 5 6

//     /*
//     0 2 5
//     1 6 4 3 7 8 9

//      */
// }

// -------------------

// using BFS Traversal -

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     void BFSHelper(int st, vector<bool> &vis) // O(V+E)
//     {
//         queue<int> q;
//         q.push(st);
//         vis[st] = true;

//         while (q.size() > 0)
//         {
//             int u = q.front(); // current vertex
//             q.pop();
//             cout << u << " ";

//             list<int> neighbors = l[u]; // u--v
//             for (int v : neighbors)     // to ensu]re that oone node is added only once to queue
//             {
//                 if (!vis[v])
//                 {
//                     vis[v] = true;
//                     q.push(v);
//                 }
//             }
//         }
//         cout << endl;
//     }

//     void BFS()
//     {
//         vector<bool> vis(V, false);
//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 BFSHelper(i, vis);
//                 cout << endl;
//             }
//         }
//     }
// };

// int main()
// {
//     Graph graph(10);

//     graph.addEdge(0, 2);
//     graph.addEdge(2, 5);
//     graph.addEdge(1, 6);
//     graph.addEdge(6, 4);
//     graph.addEdge(4, 3);
//     graph.addEdge(4, 9);
//     graph.addEdge(3, 7);
//     graph.addEdge(3, 8);

//     graph.BFS();
//     /*
//     ToGraph }                                                                                             0 2 5

//     1 6 4 3 9 7 8

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 5) Cycles in Graph -

// 5.1) Cycle Detection in an Undirected Graph - using DFS
/*
- Koi bhi node jo kisi bhi ek node ka neighbour hota h, already visited hota h pr use edge se visit nhi hua... na hi vo uska parent he.. to vo node sirf islite visit hota he qki Undirected Graph ke under cyccle exist krti hee.
- Source & neighbour ke bich me (when neighbout!=parent) jo edge hoti h is called - BACK EDGE. Back Edge is responsible for creqating cycle in an Undirected Graph.
*/

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     bool undirCycleHelper(int src, int par, vector<bool> &vis) // TC - O(V+E)
//     {
//         vis[src] = true;
//         list<int> neighbors = l[src];

//         for (int v : neighbors)
//         {
//             if (!vis[v])
//             {
//                 if (undirCycleHelper(v, src, vis))
//                 {
//                     return true;
//                 }
//                 else
//                 {
//                     if (v != par)
//                     {
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
//     bool isCycleUndir()
//     {
//         vector<bool> vis(V, false);
//         return undirCycleHelper(0, -1, vis);
//     }
// };

// int main()
// {
//     int V = 5;
//     Graph graph(V);

//     // Undirected Graph
//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(0, 3);
//     graph.addEdge(1, 2);
//     graph.addEdge(3, 4);

//     cout << graph.isCycleUndir() << endl; // 1

//     /*  checking when cycle removed -

//     graph.addEdge(0, 1);
//     // graph.addEdge(0, 2);
//     graph.addEdge(0, 3);
//     graph.addEdge(1, 2);
//     graph.addEdge(3, 4);

//     cout << graph.isCycleUndir() << endl;//0 */
// }

// -------------------

// 5.2) Cycle Detection in  Directed Graph - using DFS

/*
Can we use this Cycle Detection  method for Directed Graph ? - No, can;t
In an example - Vertex 1 is at -1. 0 is already visited and 0 is also not the parent of 1 means here is a cycle as per the logic. But there is no cycle in given directed graph.,
So this Back edge approach,can;t be used for Directed gRaph.

- So how to do it - Using Recursion and  tracking the entire path.
- Ek esa node h jo hmare recursive path ke under exist krta h and hmare current node k under ek esa edge he jjo purane kisi node pr jaa rha he. Means directed graph me cycle he.
- So, in a Directed Graph .. EK node(neighbout) h jo ki already visited h  + vo hmare recursion path me exist krti he- means there is a cycle in directed Graph.
*/

// class Graph
// {
//     int V;
//     list<int> *l;
//     bool isUndir;

// public:
//     Graph(int V, bool isUndir = true)
//     {
//         this->V = V;
//         l = new list<int>[V];
//         this->isUndir = isUndir;
//     }

//     void addEdge(int u, int v) // u-->v
//     {
//         l[u].push_back(v);
//         if (isUndir) // false
//         {
//             l[v].push_back(u);
//         }
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     bool dirCycleHelper(int src, vector<bool> &vis, vector<bool> &recPath)
//     {
//         vis[src] = true;
//         recPath[src] = true;
//         list<int> neighbors = l[src];

//         for (int v : neighbors)
//         {
//             if (!vis[v])
//             {
//                 if (dirCycleHelper(v, vis, recPath))
//                 {
//                     return true;
//                 }
//             }
//             else
//             {
//                 if (recPath[v])
//                 {
//                     return true;
//                 }
//             }
//         }
//         recPath[src] = false;
//         return false;
//     }

//     bool isCycleDir()
//     {
//         vector<bool> vis(V, false);
//         vector<bool> recPath(V, false);

//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 if (dirCycleHelper(i, vis, recPath))
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
// };
// int main()
// {
//     // Directed Graph
//     Graph graph(4, false);

//     graph.addEdge(1, 0);
//     graph.addEdge(0, 2);
//     graph.addEdge(2, 3);
//     graph.addEdge(3, 0);

//     cout << graph.isCycleDir() << endl; // 1

//     /*
//     Checking after removing the cycle -

//     graph.addEdge(1, 0);
//     graph.addEdge(0, 2);
//     graph.addEdge(2, 3);
//     cout << graph.isCycleDir() << endl; // 0
//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Bipartite Gtaph -
/*
- A bipartite graph is a graph in which ... kisi edge ke dono vertex same set me nhi hona chahiye. Ek vertex agr ek set me h to dusra vertex dusre set me hona chahiye
- No Edge connects vertices of same set.
*/

// class Graph
// {
//     int V;
//     list<int> *l;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u, int v) // u--v
//     {
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }

//     bool isBipartite()
//     {
//         queue<int> q;
//         vector<bool> vis(V, false);
//         vector<int> color(V, -1);

//         q.push(0);
//         color[0] = 0;
//         while (q.size() > 0)
//         {
//             int curr = q.front();
//             q.pop();
//             list<int> neighbours = l[curr];

//             for (int v : neighbours)
//             {
//                 if (!vis[v])
//                 {
//                     vis[v] = true;
//                     color[v] = !color[curr];
//                     q.push(v);
//                 }
//                 else
//                 {
//                     if (color[v] == color[curr])
//                     {
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };

// int main()
// {
//     Graph graph(4);

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 3);

//     cout << graph.isBipartite() << endl; // 1

//     // What if we created it Non-Bipartite
//     /* Graph graph(5);

//     graph.addEdge(0, 1);
//     graph.addEdge(0, 2);
//     graph.addEdge(1, 3);
//     graph.addEdge(2, 3);
//     graph.addEdge(0, 3);

//     cout << graph.isBipartite() << endl; // 0
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 7) All PAth Problem -

// class Graph
// {
//     int V;
//     list<int> *l;
//     bool isUndir;

// public:
//     Graph(int V, bool isUndir = true)
//     {
//         this->V = V;
//         l = new list<int>[V];
//         this->isUndir = isUndir;
//     }

//     void addEdge(int u, int v) // u-->v
//     {
//         l[u].push_back(v);
//         if (isUndir) // false
//         {
//             l[v].push_back(u);
//         }
//     }

//     void printGraph()
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbours = l[u];
//             cout << u << " : ";
//             for (auto i : neighbours)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//     }
//     void pathHelper(int src, int dest, vector<bool> &vis, string &path) // O(V+E)
//     {
//         if (src == dest)
//         {
//             cout << path << dest << endl;
//             return;
//         }

//         vis[src] = true;
//         path += to_string(src);
//         list<int> neighbours = l[src];

//         for (int v : neighbours)
//         {
//             if (!vis[v])
//             {
//                 pathHelper(v, dest, vis, path);
//             }
//         }

//         path = path.substr(0, path.size() - 1);
//         vis[src] = false;
//     }

//     void printAllPaths(int src, int dest)
//     {
//         vector<bool> vis(V, false);
//         string path = "";
//         pathHelper(src, dest, vis, path);
//     }
// };
// int main()
// {
//     Graph graph(6, false);

//     graph.addEdge(0, 3);
//     graph.addEdge(2, 3);
//     graph.addEdge(3, 1);
//     graph.addEdge(4, 0);
//     graph.addEdge(4, 1);
//     graph.addEdge(5, 0);
//     graph.addEdge(5, 2);

//     graph.printAllPaths(5, 1);
//     /*
//     5031
//     5231
//      */
// }
// ____________ ____________ ____________ ____________ ____________
