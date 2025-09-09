class Graph
{
    int V;
    list<int> *l;
    bool isUndir;

public:
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) // u-->v
    {
        l[u].push_back(v);
        if (isUndir) // false
        {
            l[v].push_back(u);
        }
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
    void pathHelper(int src, int dest, vector<bool> &vis, string &path) // O(V+E)
    {
        if (src == dest)
        {
            cout << path << dest << endl;
            return;
        }

        vis[src] = true;
        path += to_string(src);
        list<int> neighbours = l[src];

        for (int v : neighbours)
        {
            if (!vis[v])
            {
                pathHelper(v, dest, vis, path);
            }
        }

        path = path.substr(0, path.size() - 1);
        vis[src] = false;
    }

    void printAllPaths(int src, int dest)
    {
        vector<bool> vis(V, false);
        string path = "";
        pathHelper(src, dest, vis, path);
    }
};
int main()
{
    Graph graph(6, false);

    graph.addEdge(0, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    graph.printAllPaths(5, 1);
    /*
    5031
    5231
     */
}