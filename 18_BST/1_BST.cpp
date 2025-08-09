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

// 0) Intro to BST
// 1) Build BST from Array -
/*
📒- TC of BST is always give as O(HeightofTree) - Now this height depends on the tree
 - If tree is correctly BST - then TC - O(logn) - as performing Binary Search methodoly in Binary Search Tree
 - If tree is Skewed - thenn TC - O(N) - as in the worst case. becuase searching for n ndes no. of heights in not in the balanced tree so not deviding by N/2.

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

// Node *insert(Node *root, int val) // O(log N)
// {
//     if (root == NULL)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }

// Node *buildBST(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     return root;
// }

// void inorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main()
// {
//     // int n = 6;
//     // int arr[6] = {5, 1, 3, 4, 2, 7};

//     int n = 9;
//     int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

//     Node *root = buildBST(arr, n);
//     inorder(root);
//     cout << endl;

//     /*
//     // int n = 6;
//     int arr[6] = {5, 1, 3, 4, 2, 7};
//     1 2 3 4 5 7

//     // int n = 6;
//     // int arr[6] = {5, 1, 3, 4, 2, 7};
//     1 3 4 5 6 8 10 11 14

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Seach in a BST -

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

// Node *insert(Node *root, int val) // O(log N)
// {
//     if (root == NULL)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }

// Node *buildBST(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     return root;
// }

// bool searchkey(Node *root, int key) // O(Height); in avg case - O(logn)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     if (root->data == key) // Found at the root itself
//     {
//         return true;
//     }
//     if (root->data > key) // in the Left Subtree
//     {
//         return searchkey(root->left, key);
//     }
//     else
//     {
//         return searchkey(root->right, key); // right subtree
//     }
// }

// int main()
// {

//     int n = 9;
//     int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

//     Node *root = buildBST(arr, 9);
//     cout << searchkey(root, 5) << endl;//1
//     cout << searchkey(root, 10) << endl;//1
//     cout << searchkey(root, 15) << endl;//0
// }

// ____________ ____________ ____________ ____________ ____________

// 3) Deletion of a Node in BST -

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

// Node *insert(Node *root, int val) // O(log N)
// {
//     if (root == NULL)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }

// Node *buildBST(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     return root;
// }

// // 55 - Inorder Successor - can only and only be given by repsective root ke right subtre me left most node.

// Node *getInorderSuccessor(Node *root)
// {
//     while (root->left != NULL)
//     {
//         root = root->left;
//     }
//     return root;
// }

// Node *delNode(Node *root, int val)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = delNode(root->left, val);
//     }
//     else if (val > root->data)
//     {
//         root->right = delNode(root->right, val);
//     }
//     else
//     {
//         // root == val
//         // case 1 - 0 childern
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }

//         // case 2 - 1 child
//         if (root->left == NULL || root->right == NULL)
//         {
//             return root->left == NULL ? root->right : root->left;
//         }

//         // case 3 : 2 children
//         Node *IS = getInorderSuccessor(root->right);
//         root->data = IS->data;
//         root->right = delNode(root->right, IS->data); // Case1, Case2
//         return root;
//     }
//     return root;
// }

// void inorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main()
// {

//     int n = 9;
//     int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(arr, 9);
//     inorder(root);
//     cout << endl;

//     delNode(root, 5);

//     inorder(root);
//     cout << endl;
//     /*
//     delNode(root, 4);
//     1 3 4 5 6 8 10 11 14
//     1 3 5 6 8 10 11 14

//     delNode(root, 10);
//     1 3 4 5 6 8 10 11 14
//     1 3 4 5 6 8 11 14

//     delNode(root, 5);
//     1 3 4 5 6 8 10 11 14
//     1 3 4 6 8 10 11 14

//     */
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Print in a Range -

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

// Node *insert(Node *root, int val) // O(log N)
// {
//     if (root == NULL)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }

// Node *buildBST(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     return root;
// }

// void printInRange(Node *root, int start, int end)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     if (start <= root->data && root->data <= end) // case 1
//     {
//         cout << root->data << " ";
//         printInRange(root->left, start, end); // for in sorting sequence just up and down both the code lines
//         printInRange(root->right, start, end);
//     }
//     else if (root->data < start) // case 2
//     {
//         printInRange(root->right, start, end);
//     }
//     else // case 3
//     {
//         printInRange(root->left, start, end);
//     }
// }

// int main()
// {

//     int n = 9;
//     int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(arr, 9);

//     printInRange(root, 5, 12);
//     cout << endl; // 8 5 6 10 11

// }
// ____________ ____________ ____________ ____________ ____________

// 5) Root to leaf Path -

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

// Node *insert(Node *root, int val) // O(log N)
// {
//     if (root == NULL)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data) // left subtree
//     {
//         root->left = insert(root->left, val);
//     }
//     else
//     {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }

// Node *buildBST(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, arr[i]);
//     }
//     return root;
// }

// void printPath(vector<int> path)
// {
//     cout << "Path is - ";
//     for (int i = 0; i < path.size(); i++)
//     {
//         cout << path[i] << " ";
//     }
//     cout << endl;
// }
// void pathHelper(Node *root, vector<int> &path)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     path.push_back(root->data);

//     if (root->left == NULL && root->right == NULL) // Leaf
//     {
//         printPath(path);
//         path.pop_back();
//         return;
//     }

//     pathHelper(root->left, path);
//     pathHelper(root->right, path);

//     path.pop_back();
// }
// void rootToLeafPath(Node *root)
// {
//     vector<int> path;
//     pathHelper(root, path);
// }

// int main()
// {

//     int n = 9;
//     int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(arr, 9);

//     rootToLeafPath(root);
//     /*
//     Path is - 8 5 3 1
//     Path is - 8 5 3 4
//     Path is - 8 5 6
//     Path is - 8 10 11 14

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Validate BST -

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

Node *insert(Node *root, int val) // O(log N)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if (val < root->data) // left subtree
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

Node *buildBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
int main()
{

    int n = 9;
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = buildBST(arr, 9);
}