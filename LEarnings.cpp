#include <bits/stdc++.h>
using namespace std;

// 15) Kth Ancestor of Node -

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;
Node *createtree(vector<int> &nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *newnode = new Node(nodes[idx]);
    newnode->left = createtree(nodes);
    newnode->right = createtree(nodes);
    return newnode;
}

int kthAncestor(Node *root, int node, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == node)
    {
        return 0;
    }
    int leftDist = kthAncestor(root->left, node, k);
    int rightDist = kthAncestor(root->right, node, k);

    if (leftDist == -1 && rightDist == -1)
    {
        return -1;
    }
    int validVal = leftDist == -1 ? rightDist : leftDist;
    if (validVal + 1 == k)
    {
        cout << "Kth Ancestor :" << root->data << endl;
    }
    return validVal + 1;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createtree(nodes);

    int node = 6, k = 1;
    kthAncestor(root, node, k);

    /*
    int node = 5, k = 2;
    Kth Ancestor :1

    int node = 6, k = 1;
    Kth Ancestor :3

    TC - O(n) - Travelling Each Node

     */
}
