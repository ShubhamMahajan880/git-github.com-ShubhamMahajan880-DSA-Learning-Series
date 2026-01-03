#include <bits/stdc++.h>
using namespace std;

// 7) Sorted nodes to Balanced BST -

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

Node *BSTfromSortedVec(int nodes[], int st, int end)
{
    if (st > end) // >= nhi kiya qki ese bhi cases honge jb single elemenr bchega Araay me to use return  krna h naa ki NULL return krna he. Isliye
    {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node *curr = new Node(nodes[mid]);
    curr->left = BSTfromSortedVec(nodes, st, mid - 1);
    curr->right = BSTfromSortedVec(nodes, mid + 1, end);

    return curr;
}

void PreorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}
int main()
{

    int nodes[7] = {3, 4, 5, 6, 7, 8, 9};

    cout << "From Sorted nodes - " << endl;
    Node *root = BSTfromSortedVec(nodes, 0, 6);
    PreorderTraversal(root);
    /*
    From Sorted nodes -
    6 4 3 5 8 7 9

     */
}
