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

// 11) Kth Level of a Tree -
// 11.1 - using Iterative Level Order Method -

// int main()
// {

// }

// -------------------
// 11.2) - Using Rrecursion - recurively searching approach for kth level

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int idx = -1;
// Node *createtree(vector<int> &nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }

//     Node *newnode = new Node(nodes[idx]);
//     newnode->left = createtree(nodes);
//     newnode->right = createtree(nodes);

//     return newnode;
// }

// void KthHelper(Node *root, int K, int currlevel)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (currlevel == K)
//     {
//         cout << root->data << " ";
//         return;
//     }

//     KthHelper(root->left, K, currlevel + 1);
//     KthHelper(root->right, K, currlevel + 1);
// }

// void KthLevel(Node *root, int k) // O(n) - Traveled n nodes in the worst time
// {
//     KthHelper(root, k, 1); // in kth level function we are passing two parameters from the called function arguement, but using recursion need to pass 3 funciton so by using helper funciton
//     cout << endl;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = createtree(nodes);

//     cout << "So, the elements at the Level is - " << endl;
//     KthLevel(root, 3);
//     /*
//     So, the elements at the Level is -
//     4 5 6

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 12) Lowest Common Ancestor - using fundamental approach - where TC - O(n) & Sc- O(n)
/*
- Niche se upr tk jaate huye jo sbse phli common node value hoti he given n's ke liye is called as LCA.
- Jab child ka hi parent node n1 ya n2(given nodes) me aa jaye to - vo parent hi LCA hoga
*/

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int idx = -1;
// Node *createtree(vector<int> &nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }

//     Node *newnode = new Node(nodes[idx]);
//     newnode->left = createtree(nodes);
//     newnode->right = createtree(nodes);

//     return newnode;
// }

// bool rootToNodePath(Node *root, int n, vector<int> &path) // O(n)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     path.push_back(root->data);
//     if (root->data == n)
//     {
//         return true;
//     }

//     int isLeft = rootToNodePath(root->left, n, path);
//     int isRight = rootToNodePath(root->right, n, path);

//     if (isLeft || isRight)
//     {
//         return true;
//     }
//     path.pop_back();
//     return false;
// }

// int LCA(Node *root, int n1, int n2) // TC - O(n), SC - O(n)
// {
//     vector<int> path1;
//     vector<int> path2;

//     rootToNodePath(root, n1, path1);
//     rootToNodePath(root, n2, path2);

//     int lca = -1;
//     for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
//     {
//         if (path1[i] != path2[j])
//         {
//             return lca;
//         }
//         lca = path1[i];
//     }
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = createtree(nodes);

//     int n1 = 4, n2 = 3;
//     cout << "So, LCA for these nodes is -  " << LCA(root, n1, n2) << endl;

//     /*
//     int n1 = 4, n2 = 5;
//     So, LCA for these nodes is -  2

//     So, LCA for these nodes is -  1

//     */
// }

// -------------------

// 12.1) - Optimized appraoch fro SC - O(1)

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int idx = -1;
// Node *createtree(vector<int> &nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }

//     Node *newnode = new Node(nodes[idx]);
//     newnode->left = createtree(nodes);
//     newnode->right = createtree(nodes);

//     return newnode;
// }

// Node *LCA2(Node *root, int n1, int n2)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->data == n1 || root->data == n2)
//     {
//         return root;
//     }
//     Node *leftLCA = LCA2(root->left, n1, n2);
//     Node *rightLCA = LCA2(root->right, n1, n2);

//     if (leftLCA != NULL && rightLCA != NULL)
//     {
//         return root;
//     }

//     return leftLCA == NULL ? rightLCA : leftLCA;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = createtree(nodes);

//     int n1 = 4, n2 = 5;
//     cout << "So, LCA for these nodes is -  " << LCA2(root, n1, n2)->data << endl;
//     /*
//     int n1 = 4, n2 = 3;
//     So, LCA for these nodes is -  1

//     int n1 = 4, n2 = 5;
//     So, LCA for these nodes is -  2

//     No any addiiotnal space is using and visiting all the nodes for once only so TC - O(n) & SC - O(1)
//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 13) Min. Distance between Nodes -

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int idx = -1;
// Node *createtree(vector<int> &nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }

//     Node *newnode = new Node(nodes[idx]);
//     newnode->left = createtree(nodes);
//     newnode->right = createtree(nodes);

//     return newnode;
// }

// Node *LCA2(Node *root, int n1, int n2)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->data == n1 || root->data == n2)
//     {
//         return root;
//     }
//     Node *leftLCA = LCA2(root->left, n1, n2);
//     Node *rightLCA = LCA2(root->right, n1, n2);

//     if (leftLCA != NULL && rightLCA != NULL)
//     {
//         return root;
//     }

//     return leftLCA == NULL ? rightLCA : leftLCA;
// }

// int dist(Node *root, int n)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }
//     if (root->data == n)
//     {
//         return 0;
//     }

//     int leftDist = dist(root->left, n);
//     if (leftDist != -1)
//     {
//         return leftDist + 1;
//     }

//     int rightDist = dist(root->right, n);
//     if (rightDist != -1)
//     {
//         return rightDist + 1;
//     }
//     return -1;
// }

// int mindDist(Node *root, int n1, int n2)
// {
//     Node *lca = LCA2(root, n1, n2);

//     int dist1 = dist(lca, n1);
//     int dist2 = dist(lca, n2);

//     return dist1 + dist2;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = createtree(nodes);

//     int n1 = 5, n2 = 3;
//     cout << "So, the Min distahce b/w these nodes is -    " << mindDist(root, n1, n2) << endl;
//     /*
//     int n1 = 4, n2 = 5;
//     So, the Min distahce b/w these nodes is -    2

//     int n1 = 4, n2 = 6;
//     So, the Min distahce b/w these nodes is -    4

//     int n1 = 5, n2 = 3;
//     So, the Min distahce b/w these nodes is -    3

//     TC - O(n)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 14) Kth Ancestor of Node -

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int idx = -1;
// Node *createtree(vector<int> &nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }

//     Node *newnode = new Node(nodes[idx]);
//     newnode->left = createtree(nodes);
//     newnode->right = createtree(nodes);

//     return newnode;
// }

// int kthAncestor(Node *root, int node, int k)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }

//     if (root->data == node)
//     {
//         return 0;
//     }

//     int leftDist = kthAncestor(root->left, node, k);
//     int rightDist = kthAncestor(root->right, node, k);

//     if (leftDist == -1 && rightDist == -1)
//     {
//         return -1;
//     }
//     int validVal = leftDist == -1 ? rightDist : leftDist;
//     if (validVal + 1 == k)
//     {
//         cout << "Kth Ancestor :" << root->data << endl;
//     }
//     return validVal + 1;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = createtree(nodes);

//     int node = 6, k = 1;
//     kthAncestor(root, node, k);

//     /*
//     int node = 5, k = 2;
//     Kth Ancestor :1

//     int node = 6, k = 1;
//     Kth Ancestor :3

//     TC - O(n) - Travelling Each Node

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 15) Transform to Sum Tree -

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

void levelOrder(Node *root)
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
            cout << endl; // for next line after current
            if (q.empty())
            {
                break;
            }
            q.push(NULL); // to next line for next level
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

int transform(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftOld = transform(root->left);
    int rightOld = transform(root->right);
    int currOld = root->data;

    root->data = leftOld + rightOld;

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }

    return currOld;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createtree(nodes);

    transform(root);
    cout << "After The Treesum Transform - " << endl;
    levelOrder(root);

    /*
After The Treesum Transform -
20
9 6
0 0 0

    TC - O(n)
     */
}