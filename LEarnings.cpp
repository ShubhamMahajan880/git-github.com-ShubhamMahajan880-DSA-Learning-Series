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

    Node(int val)
    {
        data = val;
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