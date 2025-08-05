#include <bits/stdc++.h>
#include <queue>
using namespace std;

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
Node *createtree(vector<int> nodes)
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

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
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

int heightoftree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = heightoftree(root->left);
    int rightheight = heightoftree(root->right);

    int currheight = max(leftheight, rightheight) + 1;
    return currheight;
}

int nodesintree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsidenodes = nodesintree(root->left);
    int rightsidenodes = nodesintree(root->right);

    int totalnodes = leftsidenodes + rightsidenodes + 1;
    return totalnodes;
}

int sumofnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftnodesum = sumofnodes(root->left);
    int rightnodesum = sumofnodes(root->right);

    int totalsumofnodes = leftnodesum + rightnodesum + root->data;
    return totalsumofnodes;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createtree(nodes);

    cout << "So, the basic root of the tree is - " << root->data << endl;
    cout << "-------------" << endl;

    cout << "The Pre of Elements is - " << endl;
    preOrderTraversal(root);
    cout << "-------------" << endl;

    cout << "The IN of Elements is - " << endl;
    inOrderTraversal(root);
    cout << "-------------" << endl;

    cout << "The Post of Elements is - " << endl;
    postOrderTraversal(root);
    cout << "-------------" << endl;

    cout << "The Level Order  of Elements is - " << endl;
    levelOrderTraversal(root);
    cout << "-------------" << endl;

    cout << "hence the height of the tree is - " << heightoftree(root) << endl;
    cout << "-------------" << endl;

    cout << "So, the no of nodes of tree are - " << nodesintree(root) << endl;
    cout << "-------------" << endl;

    cout << "hence the total sum of all the nodes is - " << sumofnodes(root) << endl;
    cout << "-------------" << endl;
    return 0;
}