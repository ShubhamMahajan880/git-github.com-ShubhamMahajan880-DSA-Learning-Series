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
        data = val;
        left = right = NULL;
    }
};

Node *insertNode(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (root->data < val)
    {
        root->right = insertNode(root->right, val);
    }
    else
    {
        root->left = insertNode(root->left, val);
    }
    return root;
}

Node *createBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insertNode(root, arr[i]);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void intherange(Node *root, int start, int end)
{
    if (root == NULL)
    {
        return;
    }

    if (start <= root->data && root->data <= end)
    {
        cout << root->data << " ";
        intherange(root->left, start, end);
        intherange(root->right, start, end);
    }

    else if (root->data > start)
    {
        intherange(root->left, start, end);
    }
    else
    {
        intherange(root->right, start, end);
    }
}

void printpath(vector<int> path)
{
    cout << "Path is :";
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}

void pathHelper(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->data);

    if (root->left == NULL && root->right == NULL)
    {
        printpath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left, path);
    pathHelper(root->right, path);
    path.pop_back();
}

void roottoleafpath(Node *root)
{
    vector<int> path;
    pathHelper(root, path);
}

int main()
{
    int n = 9;
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node *root = createBST(arr, n);

    cout << "So, the BSt is - " << endl;
    inorder(root);
    cout << endl;

    cout << "After range implementation - " << endl;
    intherange(root, 5, 11);
    cout << endl;

    roottoleafpath(root);
}