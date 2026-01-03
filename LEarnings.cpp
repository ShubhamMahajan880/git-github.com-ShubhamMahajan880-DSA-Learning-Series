#include <bits/stdc++.h>
using namespace std;

// 10) Merge  2 BST's -

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Inorder traversal to store elements
void getInorder(Node *root, vector<int> &nodes)
{
    if (root == NULL)
        return;
    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

// Convert sorted vector to balanced BST
Node *BSTfromSortedVec(vector<int> &nodes, int st, int end)
{
    if (st > end)
        return NULL;
    int mid = st + (end - st) / 2;
    Node *curr = new Node(nodes[mid]);
    curr->left = BSTfromSortedVec(nodes, st, mid - 1);
    curr->right = BSTfromSortedVec(nodes, mid + 1, end);
    return curr;
}

// Merge two BSTs
Node *mergeBST(Node *root1, Node *root2)
{
    vector<int> nodes1, nodes2, merged;
    getInorder(root1, nodes1);
    getInorder(root2, nodes2);

    // Merge sorted arrays
    int i = 0, j = 0;
    while (i < nodes1.size() && j < nodes2.size())
    {
        if (nodes1[i] < nodes2[j])
            merged.push_back(nodes1[i++]);
        else
            merged.push_back(nodes2[j++]);
    }
    while (i < nodes1.size())
        merged.push_back(nodes1[i++]);
    while (j < nodes2.size())
        merged.push_back(nodes2[j++]);

    // Build balanced BST from merged array
    return BSTfromSortedVec(merged, 0, merged.size() - 1);
}

// Print inorder
void inorderPrint(Node *root)
{
    if (!root)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void preorderPrint(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main()
{
    // Your given BSTs
    Node *root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node *root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);

    // Merge and print
    Node *mergedRoot = mergeBST(root1, root2);

    cout << "Inorder of merged BST: ";
    inorderPrint(mergedRoot);
    cout << "\n";

    cout << "Preorder of merged BST: ";
    preorderPrint(mergedRoot);
    cout << "\n";

    return 0;
    /*

Inorder of merged BST: 1 2 3 4 9 12
Preorder of merged BST: 3 1 2 9 4 12

    */
}
