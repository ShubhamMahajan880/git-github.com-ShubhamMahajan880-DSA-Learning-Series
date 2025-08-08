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


// _______________________________________________________________________________________________________________________________________________________________________________

bool roottonodedistance(Node *root, int n, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);

    if (root->data == n)
    {
        return true;
    }

    int leftside = roottonodedistance(root->left, n, path);
    int rightside = roottonodedistance(root->right, n, path);

    if (leftside || rightside)
    {
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1;
    vector<int> path2;

    roottonodedistance(root, n1, path1);
    roottonodedistance(root, n2, path2);

    int lca = -1;
    for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
    {
        if (path1[i] != path2[j])
        {
            return lca;
        }
        lca = path2[j];
    }
    return lca;
}

Node *LCA2(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLCA2 = LCA2(root->left, n1, n2);
    Node *rightLCA2 = LCA2(root->right, n1, n2);

    if (leftLCA2 != NULL && rightLCA2 != NULL)
    {
        return root;
    }

    if (leftLCA2 != NULL && rightLCA2 == NULL)
    {
        return leftLCA2;
    }
    else
    {
        return rightLCA2;
    }
}

int dist(Node *root, int n)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root->data == n)
    {
        return 0;
    }
    int leftdist = dist(root->left, n);
    int rightdist = dist(root->right, n);

    if (leftdist != -1)
    {
        return leftdist + 1;
    }
    if (rightdist != -1)
    {
        return rightdist + 1;
    }
}

int mindistancebetweennodes(Node *root, int n1, int n2)
{
    Node *lca = LCA2(root, n1, n2);
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    int totaldist = dist1 + dist2;
    return totaldist;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = treecreation(nodes);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    cout << "_ _ _ _ - " << endl;

    int n1, n2;
    cout << "LCA is : " << LCA(root, 4, 6) << endl;
    cout << "LCA is : " << LCA(root, 4, 5) << endl;
    cout << "LCA is : " << LCA(root, 3, 6) << endl;
    cout << "LCA is : " << LCA(root, 2, 3) << endl;
    cout << "_ _ _ _ - " << endl;

    cout << "LCA2 is : " << LCA2(root, 4, 6)->data << endl;
    cout << "LCA2 is : " << LCA2(root, 4, 5)->data << endl;
    cout << "LCA2 is : " << LCA2(root, 3, 6)->data << endl;
    cout << "LCA2 is : " << LCA2(root, 2, 3)->data << endl;
    cout << "_ _ _ _ - " << endl;

    cout << "Hence the min dustance between these nodes can be given as - " << mindistancebetweennodes(root, 4, 6) << endl;
    cout << "Hence the min dustance between these nodes can be given as - " << mindistancebetweennodes(root, 4, 5) << endl;
    cout << "Hence the min dustance between these nodes can be given as - " << mindistancebetweennodes(root, 3, 6) << endl;
    cout << "Hence the min dustance between these nodes can be given as - " << mindistancebetweennodes(root, 2, 3) << endl;
    cout << "_ _ _ _ - " << endl;
}