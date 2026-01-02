#include <bits/stdc++.h>
using namespace std;

// 12) Kth Level of a Tree -
// 12.2) - Using Rrecursion - recurively searching approach for kth level

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
void KthHelper(Node *root, int K, int currlevel)
{
    if (root == NULL)
    {
        return;
    }
    if (currlevel == K)
    {
        cout << root->data << " ";
        return;
    }
    KthHelper(root->left, K, currlevel + 1);
    KthHelper(root->right, K, currlevel + 1);
}
void KthLevel(Node *root, int k) // O(n) - Traveled n nodes in the worst time
{
    KthHelper(root, k, 1); // in kth level function we are passing two parameters from the called function arguement, but using recursion need to pass 3 funciton so by using helper funciton
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createtree(nodes);
    cout << "So, the elements at the Level is - " << endl;
    KthLevel(root, 3);
    /*
    So, the elements at the Level is -
    4 5 6

     */
}
