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

// Binary Tree -
//  Tree will purely run on the backtreacking and recursion concept.

// 1) Creating Binary Tree through Pre Ordder Traversal -

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

// static int idx = -1; // - Preserves the value throughoiut the call

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);
//     cout << "root is - " << root->data << endl;
//     /*  root is - 1
//      TC - O(n) Linear TC of array for building Tree
//       */
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Tree Traversal techniques -
/*
📒 - There is 4 type of Tree Traversal techniques -
1) Pre Order Traversal  -
2) In Order Traversal -
3) Post Order Traversal -
Above all 3 Order Traversal are performed using Recdursion concept, but the
last 4th one Traversal is done by using Iterative Traversal. In the Depthwise
4) Level  Order Traversal
 */
// 2.1) Pre Order Traversal -

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// void preorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " "; // 1) Pehle Root print kraya
//     preorder(root->left); // 2) phr Root ka Left
//     preorder(root->right); // 3) Phr Root Ka Right
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, the PREORDER TRAVERSAL is - " << endl;
//     preorder(root);
//     cout << endl;

//     /*
//     So, the PREORDER TRAVERSAL is -
//     1 2 4 5 3 6

//     TC - O(N) - Ek node pr ek hi baar travel kiya h.. so seems linear trave lon an array therefor O(N) - Linear TC
//      */
// }

// ____________ ____________

// 2.2) IN Order Traversal-

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// void INorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     INorder(root->left);       // 1) Pehle Root ka Left
//     cout << root->data << " "; // 2) Phr Root Print kraya
//     INorder(root->right);      // 3) Phr RRoot ka Right
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, the INORDER TRAVERSAL is - " << endl;
//     INorder(root);
//     cout << endl;
//     /*
//     So, the INORDER TRAVERSAL is -
//     4 2 5 1 3 6

//     TC - O(N)
//      */
// }
// ____________ ____________

// 2.3) Post Order Traversal-

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// void postorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);     // 1) Pehle Root ka Left
//     postorder(root->right);    // 2) Phr Root ka right
//     cout << root->data << " "; // 3) Then Root ko Print
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, the postORDER TRAVERSAL is - " << endl;
//     postorder(root);
//     cout << endl;
//     /*
//     So, the postORDER TRAVERSAL is -
//     4 5 2 6 3 1

//     TC - O(N)
//      */
// }
// ____________ ____________

// 2.4) Level Order Traversal -

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// void levelOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();

//         cout << curr->data << " ";

//         if (curr->left != NULL)
//         {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL)
//         {
//             q.push(curr->right);
//         }
//     }
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, after Level Order Traversal Nodes are -  " << endl;
//     levelOrder(root);

//     /*
//     So, after Level Order Traversal Nodes are -
//     1 2 3 4 5 6

//     TC - O(N)
//     SC - O(N)
//     */
// }

// -------------------

// // 2.4.1) - Modification in Level Order Traversal - Pushing all elements Level Wise in Output

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// void levelOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             cout << endl; // for next line after current
//             if (q.empty())
//             {
//                 break;
//             }
//             q.push(NULL); // to next line for next level
//         }
//         else
//         {
//             cout << curr->data << " ";

//             if (curr->left != NULL)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right != NULL)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, after Level Order Traversal Nodes are -  " << endl;
//     levelOrder(root);
//     /*
//     So, after Level Order Traversal Nodes are -
//     1
//     2 3
//     4 5 6
//     TC - O(N)
//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 3) Height of a Tree -

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// int height(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int leftHight = height(root->left);
//     int righttHight = height(root->right);

//     int currHight = max(leftHight, righttHight) + 1;
//     return currHight;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, Height of the Tree is - " << height(root) << endl;

//     /*
//     So, Height of the Tree is - 3

//     TC - O(N) - as n no of nodes travveled. Seems like One node at a time travveled linearly on an array
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Count of Nodes in a Tree -

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

// static int idx = -1;

// Node *buildTree(vector<int> nodes)
// {
//     idx++;
//     if (nodes[idx] == -1)
//     {
//         return NULL;
//     }
//     Node *currNode = new Node(nodes[idx]);
//     currNode->left = buildTree(nodes);  // Left Subtree
//     currNode->right = buildTree(nodes); // Right Subtree

//     return currNode;
// }

// int countNode(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int leftCount = countNode(root->left);
//     int rightCount = countNode(root->right);

//     return leftCount + rightCount + 1;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "hence, the total nodes in the tree are - " << countNode(root) << endl;

//     /*
//     hence, the total nodes in the tree are - 6
//     TC - O(N)
//      */

//     //  Checking the count function by creating tree with random nodes -
//     Node *root2 = new Node(5);
//     root2->left = new Node(3);
//     root2->right = new Node(4);

//     cout << "Count 2 for another manually created tree is - " << countNode(root2) << endl;
//     // o/p - Count 2 for another manually created tree is - 3
// }

// ____________ ____________ ____________ ____________ ____________

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
// ____________ ____________ ____________ ____________ ____________
