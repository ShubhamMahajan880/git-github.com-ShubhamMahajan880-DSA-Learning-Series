#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
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
Node *treecreation(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }

    Node *currnode = new Node(nodes[idx]);
    currnode->left = treecreation(nodes);
    currnode->right = treecreation(nodes);
    return currnode;
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

void anotherLevelOrderTraversal(Node *root)
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
            cout << endl;
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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);

    int currentheight = max(leftheight, rightheight) + 1;
    return currentheight;
}

int countnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftnodes = countnodes(root->left);
    int rightnodes = countnodes(root->right);
    int totalnodes = leftnodes + rightnodes + 1;

    return totalnodes;
}

int sumofnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftnodessum = sumofnodes(root->left);
    int rightnodesum = sumofnodes(root->right);
    int totalsum = leftnodessum + rightnodesum + root->data;

    return totalsum;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = treecreation(nodes);

    cout << "After Preorder - " << endl;
    preOrderTraversal(root);
    cout << "_______________" << endl;

    cout << "After Inorder Traversal - " << endl;
    inOrderTraversal(root);
    cout << "_______________" << endl;

    cout << "After Postordr Traversal - " << endl;
    postOrderTraversal(root);
    cout << "_______________" << endl;

    cout << "The Height of Tree is - " << height(root) << endl;
    cout << "_______________" << endl;

    cout << "So, the total no of nodes are - " << countnodes(root) << endl;
    cout << "_______________" << endl;

    cout << "The sum of all nodes si - " << sumofnodes(root) << endl;
    cout << "_______________" << endl;

    cout << "After Level Order Traversal the Tree is - " << endl;
    levelOrderTraversal(root);
    cout << "_______________" << endl;

    cout << "After Another Level Order Traversdal the Output in the Levell Format is given as - " << endl;
    anotherLevelOrderTraversal(root);
    cout << "_______________" << endl;
}
