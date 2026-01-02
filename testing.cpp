#include <bits/stdc++.h>
using namespace std;

// 6) Check from Root to asked Node if the path exist or not ?
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *treecreation(vector<int> &nodes) // pass by reference
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currnode = new Node(nodes[idx]);
    currnode->left = treecreation(nodes);
    currnode->right = treecreation(nodes);
    return currnode;
}
bool rootToNodePath(Node *root, int n, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == n)
    {
        return true;
    }
    bool isLeft = rootToNodePath(root->left, n, path);
    bool isRight = rootToNodePath(root->right, n, path);

    if (isLeft || isRight)
    {
        return true;
    }
    path.pop_back();
    return false;
}
void printRootToNode(Node *root, int n)
{
    vector<int> path;
    if (rootToNodePath(root, n, path))
    {
        for (auto val : path)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Node " << n << " not found" << endl;
    }
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = treecreation(nodes);

    printRootToNode(root, 1);  // 1
    printRootToNode(root, 2);  // 1 2
    printRootToNode(root, 3);  // 1 3
    printRootToNode(root, 4);  // 1 2 4
    printRootToNode(root, 4);  // 1 2 4
    printRootToNode(root, 5);  // 1 2 5
    printRootToNode(root, 6);  // 1 3 6
    printRootToNode(root, 10); // Node 10 not found
}
// ____________ ____________ ____________ ____________ ____________
