#include <bits/stdc++.h>
using namespace std;

// 3) Deletion of a Node in BST -

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
Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}
Node *buildBST(int nodes[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
        root = insert(root, nodes[i]);
    return root;
}
Node *getInorderSuccessor(Node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}
Node *delnode(Node *root, int todelete)
{
    if (root == NULL)
        return NULL;
    if (todelete < root->data)
    {
        root->left = delnode(root->left, todelete);
    }
    else if (todelete > root->data)
    {
        root->right = delnode(root->right, todelete);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delnode(root->right, IS->data);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    int nodes[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    int n = sizeof(nodes) / sizeof(nodes[0]);

    Node *root = buildBST(nodes, n);
    inorder(root);
    cout << endl;

    root = delnode(root, 5);

    inorder(root);
    cout << endl;

    return 0;
}
