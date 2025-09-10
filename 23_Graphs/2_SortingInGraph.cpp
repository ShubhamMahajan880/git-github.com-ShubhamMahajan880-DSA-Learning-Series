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

// 8) Topological Sorting -
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

//     void topoHelper(int src, vector<bool> &vis, stack<int> &s) // O(V+E)
//     {
//         vis[src] = true;

//         list<int> neighbour = l[src];
//         for (int v : neighbour)
//         {
//             if (!vis[v])
//             {
//                 topoHelper(v, vis, s);
//             }
//         }
//         s.push(src);
//     }

//     void topoSort()
//     {
//         vector<bool> vis(V, false);
//         stack<int> s;

//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 topoHelper(i, vis, s);
//             }
//         }

//         // Printing Topological order -
//         while (s.size() > 0)
//         {
//             cout << s.top() << " ";
//             s.pop();
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Graph graph(6, false);

//     graph.addEdge(2, 3);
//     graph.addEdge(3, 1);

//     graph.addEdge(4, 0);
//     graph.addEdge(4, 1);

//     graph.addEdge(5, 0);
//     graph.addEdge(5, 2);

//     graph.topoSort(); // 5 4 2 3 1 0
// }
// ____________ ____________

// 8.1) Leetcode 207) Course Schedule Problem -

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

// class Solution
// {
// public:
//     bool isCycle(int src, vector<bool> &vis, vector<bool> &rec, vector<vector<int>> &graph)
//     {
//         vis[src] = true;
//         rec[src] = true;

//         for (int i = 0; i < graph.size(); i++)
//         {
//             int u = graph[i][1];
//             int v = graph[i][0];
//             if (u == src)
//             {
//                 if (!vis[v])
//                 {
//                     if (isCycle(v, vis, rec, graph))
//                     {
//                         return true;
//                     }
//                     else
//                     {
//                         if (rec[v])
//                         {
//                             return true;
//                         }
//                     }
//                 }
//             }
//         }
//         rec[src] = false;
//         return false;
//     }
//     bool canFinish(int numCourses, vector<vector<int>> &graph)
//     {
//         int V = numCourses;
//         vector<bool> vis(V, false);
//         vector<bool> rec(V, false);

//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 if (isCycle(i, vis, rec, graph))
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };
// ____________ ____________

// 8.2) Leetcode 210) Course Schedule II -

// class Solution
// {
// public:
//     bool isCycle(int src, vector<bool> &vis, vector<bool> &rec, vector<vector<int>> &graph)
//     {
//         vis[src] = true;
//         rec[src] = true;

//         for (int i = 0; i < graph.size(); i++)
//         {
//             int u = graph[i][1];
//             int v = graph[i][0];
//             if (u == src)
//             {
//                 if (!vis[v])
//                 {
//                     if (isCycle(v, vis, rec, graph))
//                     {
//                         return true;
//                     }
//                     else
//                     {
//                         if (rec[v])
//                         {
//                             return true;
//                         }
//                     }
//                 }
//             }
//         }
//         rec[src] = false;
//         return false;
//     }

//     void topoSort(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>> &graph)
//     {
//         vis[src] = true;

//         for (int i = 0; i < graph.size(); i++)
//         {
//             int u = graph[i][1];
//             int v = graph[i][0];
//             if (u == src)
//             {
//                 if (!vis[v])
//                 {
//                     topoSort(v, vis, s, graph);
//                 }
//             }
//         }
//         s.push(src);
//     }
//     bool findOrder(int numCourses, vector<vector<int>> &graph)
//     {
//         int V = numCourses;
//         vector<bool> vis(V, false);
//         vector<bool> rec(V, false);
//         vector<int> ans;

//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 if (isCycle(i, vis, rec, graph))
//                 {
//                     return false;
//                 }
//             }
//         }
//         // Perform Topological Sorting -
//         vector<bool> vis2(V, false);
//         stack<int> s;
//         for (int i = 0; i < V; i++)
//         {
//             if (!vis2[i])
//             {
//                 topoSort(i, vis2, s, graph);
//             }
//         }
//         while (s.size() > 0)
//         {
//             ans.push_back(s.top());
//             s.pop();
//         }
//     }
// };
// ____________ ____________ ____________ ____________ ____________

// 9) Kahn's Algorithm (using BFS) -

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

//     void calIndegree(vector<int> &indeg)
//     {
//         for (int u = 0; u < V; u++)
//         {
//             list<int> neighbour = l[u];
//             for (int v : neighbour) // u->v
//             {
//                 indeg[v]++;
//             }
//         }
//     }

//     void topoSort2() // Kahn's ALgo
//     {
//         vector<int> indeg(V, 0);
//         calIndegree(indeg);
//         queue<int> q;
//         // 0 indeg nodes -> starting point
//         for (int i = 0; i < V; i++)
//         {
//             if (indeg[i] == 0)
//             {
//                 q.push(i);
//             }
//         }

//         while (q.size() > 0)
//         {
//             int curr = q.front();
//             q.pop();
//             cout << curr << " ";

//             list<int> neighbours = l[curr];
//             for (int v : neighbours)
//             {
//                 indeg[v]--;
//                 if (indeg[v] == 0) // No pending Dependencies
//                 {
//                     q.push(v);
//                 }
//             }
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Graph graph(6, false);

//     graph.addEdge(2, 3);
//     graph.addEdge(3, 1);

//     graph.addEdge(4, 0);
//     graph.addEdge(4, 1);

//     graph.addEdge(5, 0);
//     graph.addEdge(5, 2);

//     graph.topoSort2(); // 4 5 0 2 3 1
// }
// ____________ ____________ ____________ ____________ ____________

// 9.1) Kahn's Algorithm For getting Cycles in Graph -
/*
 Using Kanh's algorithm. pehle jiskki indeg(0) he use push kiya queue me. ab jise push kiya use explore kr k uske neighbor ki indeg km ki... and jo push kiya th ause ans me print kraya.
 Ab indeg km krne pr bhi != 0, then nothing to push in the queue means Queue has veen empty and not any valid ans --- Means There is a cycle.
  */

// void calIndegree(vector<int> &indeg)
// {
//     for (int u = 0; u < V; u++)
//     {
//         list<int> neighbour = l[u];
//         for (int v : neighbour) // u->v
//         {
//             indeg[v]++;
//         }
//     }
// }
// void topoSort2() // Kahn's ALgo
// {
//     vector<int> indeg(V, 0);
//     calIndegree(indeg);
//     queue<int> q;
//     // 0 indeg nodes -> starting point
//     for (int i = 0; i < V; i++)
//     {
//         if (indeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }

//     while (q.size() > 0) // if q != > 0 menas q empty and cycle exist.
//     {
//         int curr = q.front();
//         q.pop();
//         cout << curr << " ";

//         list<int> neighbours = l[curr];
//         for (int v : neighbours)
//         {
//             indeg[v]--;
//             if (indeg[v] == 0) // No pending Dependencies
//             {
//                 q.push(v);
//             }
//         }
//     }
//     cout << endl;
// }
// ____________ ____________ ____________ ____________ ____________
