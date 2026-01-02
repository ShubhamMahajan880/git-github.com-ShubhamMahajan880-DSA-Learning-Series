#include <bits/stdc++.h>
using namespace std;

// 7) Diameter of a tree - in o(N^2) -

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

static int idx = -1;

Node *buildTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);  // Left Subtree
    currNode->right = buildTree(nodes); // Right Subtree
    return currNode;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHight = height(root->left);
    int righttHight = height(root->right);
    int currHight = max(leftHight, righttHight) + 1;
    return currHight;
}

int diam1(Node *root) // O(n^2)
{
    if (root == NULL)
    {
        return 0;
    }
    int currDiam = height(root->left) + height(root->right) + 1; // O(n)
    int leftDiam = diam1(root->left);
    int rightDiam = diam1(root->right);
    return max(currDiam, max(leftDiam, rightDiam));
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);

    cout << "So, the diameter of the above tree is - " << diam1(root) << endl;
    /*
    So, the diameter of the above tree is - 5
    TC - O(n^2) - bcause for every node its simlar and perfomed in Constant time
    but for Height waala function is calling againa nd again so for n nodes
    it'll call n times therefore complexity O(n^2)
     */
}
