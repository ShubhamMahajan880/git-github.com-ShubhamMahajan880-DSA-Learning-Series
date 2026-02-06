#include <bits/stdc++.h>
using namespace std;

// 5) Sum of Nodes in a Tree -

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

int sumofNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumofNodes(root->left);
    int rightSum = sumofNodes(root->right);
    return leftSum + rightSum + root->data;
}
//  For clearly visulization of sum return using recursing by using currsum further in function -

int sumofNodes2(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumofNodes2(root->left);
    int rightSum = sumofNodes2(root->right);
    int currSum = leftSum + rightSum + root->data;
    cout << "Sum is - " << currSum << endl;
    return currSum;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    cout << "So, the total sum of all the Nodes is - " << sumofNodes(root) << endl;

    /*
    So, the total sum of all the Nodes is - 21

    TC - O(N);

     */

    cout << "For clearly visulization of sum return using recursing by using currsum further in function -" << endl;

    cout << "So, the total sum of all the Nodes is - " << sumofNodes2(root) << endl;
    /*
    For clearly visulization of sum return using recursing by using currsum further in function -
    Sum is - 4
    Sum is - 5
    Sum is - 11
    Sum is - 6
    Sum is - 9
    Sum is - 21
    So, the total sum of all the Nodes is - 21
     */
}
