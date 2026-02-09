#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (root->data < val)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}
Node *buildBST(vector<int> nodes, int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, nodes[i]);
    }
    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{

    vector<int> nodes = {5, 1, 3, 4, 2, 7, 9};
    int n = nodes.size();

    Node *root = buildBST(nodes, n);
    inOrder(root);
    cout << endl;
}