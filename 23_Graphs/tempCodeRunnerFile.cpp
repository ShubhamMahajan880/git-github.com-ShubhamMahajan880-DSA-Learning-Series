class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) // u--v
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printGraph()
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            cout << u << " : ";
            for (auto i : neighbours)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    void BFSHelper(int st, vector<bool> &vis) // O(V+E)
    {
        queue<int> q;
        q.push(st);
        vis[st] = true;

        while (q.size() > 0)
        {
            int u = q.front(); // current vertex
            q.pop();
            cout << u << " ";

            list<int> neighbors = l[u]; // u--v
            for (int v : neighbors)     // to ensu]re that oone node is added only once to queue
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void BFS()
    {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                BFSHelper(i, vis);
                cout << endl;
            }
        }
    }
};

int main()
{
    Graph graph(10);

    graph.addEdge(0, 2);
    graph.addEdge(2, 5);
    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 3);
    graph.addEdge(4, 9);
    graph.addEdge(3, 7);
    graph.addEdge(3, 8);

    graph.BFS();
    /*
    ToGraph }                                                                                             0 2 5

    1 6 4 3 9 7 8


     */
}