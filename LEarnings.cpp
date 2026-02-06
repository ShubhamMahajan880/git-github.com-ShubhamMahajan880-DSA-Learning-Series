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

static int idx = -1;

Node *createTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = createTree(nodes);
    currNode->right = createTree(nodes);
    return currNode;
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
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

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

void modifiedLevelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << " " << endl;
            if (q.empty())
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            cout << curr->data << " ";

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

int heightofTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = heightofTree(root->left);
    int rightHeight = heightofTree(root->right);
    int currHeight = max(leftHeight, rightHeight) + 1;
    return currHeight;
}

int countofNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countofNodes(root->left);
    int rightCount = countofNodes(root->right);
    int finalCount = leftCount + rightCount + 1;
    return finalCount;
}

int sumofNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumofNodes(root->left);
    int rightSum = sumofNodes(root->right);
    int totalSum = leftSum + rightSum + root->data;
    return totalSum;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createTree(nodes);
    cout << "root is - " << root->data << endl;
    cout << "Preorde is - " << endl;
    preOrder(root);
    cout << "Inorder Traversal is - " << endl;
    inOrder(root);
    cout << "PostOrder is " << endl;
    postOrder(root);
    cout << "Levelorder Traversal is - " << endl;
    levelOrder(root);
    cout << "modifiedLevelOrderTraversal is - " << endl;
    modifiedLevelOrderTraversal(root);
    cout << "So, height of the tree is -" << heightofTree(root) << endl;
    cout << "similarly, count of the tree is -" << countofNodes(root) << endl;
    cout << "hence, Sum of the tree is -" << sumofNodes(root) << endl;
}