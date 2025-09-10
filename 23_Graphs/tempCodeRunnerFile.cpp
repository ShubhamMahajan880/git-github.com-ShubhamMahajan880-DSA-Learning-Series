void calIndegree(vector<int> &indeg)
{
    for (int u = 0; u < V; u++)
    {
        list<int> neighbour = l[u];
        for (int v : neighbour) // u->v
        {
            indeg[v]++;
        }
    }
}
void topoSort2() // Kahn's ALgo
{
    vector<int> indeg(V, 0);
    calIndegree(indeg);
    queue<int> q;
    // 0 indeg nodes -> starting point
    for (int i = 0; i < V; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (q.size() > 0)
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        list<int> neighbours = l[curr];
        for (int v : neighbours)
        {
            indeg[v]--;
            if (indeg[v] == 0) // No pending Dependencies
            {
                q.push(v);
            }
        }
    }
    cout << endl;
}