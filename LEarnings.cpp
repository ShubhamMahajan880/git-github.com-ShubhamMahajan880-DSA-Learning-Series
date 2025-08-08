#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include <map>;
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

void kthhelper(Node *root, int k, int currlevel)
{
    if (root == NULL)
    {
        return;
    }

    if (currlevel == k)
    {
        cout << root->data << " ";
        return;
    }
    kthhelper(root->left, k, currlevel + 1);
    kthhelper(root->right, k, currlevel + 1);
}

void kthlevel(Node *root, int k)
{
    kthhelper(root, k, 1);
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = treecreation(nodes);
    int k;
    kthlevel(root, 0);
}
