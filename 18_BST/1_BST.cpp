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
// 1) Build BST from nodes -
/*
📒- TC of BST is always give as O(HeightofTree) - Now this height depends on the tree
 - If tree is correctly BST - then TC - O(logn) - as performing Binary Search methodoly in Binary Search Tree
 - If tree is Skewed - thenn TC - O(N) - as in the worst case. becuase searching for n ndes no. of heights in not in the balanced tree so not deviding by N/2.
 - The Inorder Traversal of BST always gives the sorted nodes value. because the left side's values are small then Mid and then right. so using Inorder(Left,Root,Right) we get the sorted Nodes.

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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
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
//     // int nodes[6] = {5, 1, 3, 4, 2, 7};

//     int n = 9;
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

//     Node *root = buildBST(nodes, n);
//     inorder(root);
//     cout << endl;

//     /*
//     // int n = 6;
//     int nodes[6] = {5, 1, 3, 4, 2, 7};
//     1 2 3 4 5 7

//     // int n = 6;
//     // int nodes[6] = {5, 1, 3, 4, 2, 7};
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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
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
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

//     Node *root = buildBST(nodes, 9);
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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
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

// Node *delnode(Node *root, int todelete)
// {
//     if (root == NULL)
//     {
//         cout << "Node " << todelete << " not found.\n";
//         return NULL;
//     }

//     if (todelete < root->data)
//     {
//         root->left = delnode(root->left, todelete);
//     }
//     else if (todelete > root->data)
//     {
//         root->right = delnode(root->right, todelete);
//     }
//     else
//     {
//         // Case 1: No child
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // Case 2: One child
//         if (root->left == NULL || root->right == NULL)
//         {
//             Node *child;
//             if (root->left != NULL)
//             {
//                 child = root->left;
//             }
//             else
//             {
//                 child = root->right;
//             }
//             delete root;
//             return child;
//         }
//         // Case 3: Two children
//         Node *IS = inordersuccessor(root->right);
//         root->data = IS->data;
//         root->right = delnode(root->right, IS->data);
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
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(nodes, 9);
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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
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
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(nodes, 9);

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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
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
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(nodes, 9);

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

// Node *buildBST(int nodes[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         root = insert(root, nodes[i]);
//     }
//     return root;
// }

// bool validateHelper(Node *root, Node *min, Node *max)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     if (min != NULL && root->data < min->data)
//     {
//         return false;
//     }
//     if (max != NULL && root->data > max->data)
//     {
//         return false;
//     }

//     return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
// }

// bool validateBST(Node *root)
// {
//     return validateHelper(root, NULL, NULL);
// }
// int main()x
// {

//     int n = 9;
//     int nodes[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
//     Node *root = buildBST(nodes, 9);

//     cout << validateBST(root) << endl; // 1

//     root->data = 15;
//     cout << validateBST(root) << endl; // 0
// }
// ____________ ____________ ____________ ____________ ____________

// 7) Sorted nodes to Balanced BST -

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

// Node *BSTfromSortedVec(int nodes[], int st, int end)
// {
//     if (st > end) // >= nhi kiya qki ese bhi cases honge jb single elemenr bchega Araay me to use return  krna h naa ki NULL return krna he. Isliye
//     {
//         return NULL;
//     }

//     int mid = st + (end - st) / 2;
//     Node *curr = new Node(nodes[mid]);
//     curr->left = BSTfromSortedVec(nodes, st, mid - 1);
//     curr->right = BSTfromSortedVec(nodes, mid + 1, end);

//     return curr;
// }

// void PreorderTraversal(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     cout << root->data << " ";
//     PreorderTraversal(root->left);
//     PreorderTraversal(root->right);
// }
// int main()
// {

//     int nodes[7] = {3, 4, 5, 6, 7, 8, 9};

//     cout << "From Sorted nodes - " << endl;
//     Node *root = BSTfromSortedVec(nodes, 0, 6);
//     PreorderTraversal(root);
//     /*
//     From Sorted nodes -
//     6 4 3 5 8 7 9

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 8) Convert BSt to Balanced BST -

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

// Node *BSTfromSortedVec(vector<int> nodes, int st, int end)
// {
//     if (st > end) // >= nhi kiya qki ese bhi cases honge jb single elemenr bchega Araay me to use return  krna h naa ki NULL return krna he. Isliye
//     {
//         return NULL;
//     }

//     int mid = st + (end - st) / 2;
//     Node *curr = new Node(nodes[mid]);
//     curr->left = BSTfromSortedVec(nodes, st, mid - 1);
//     curr->right = BSTfromSortedVec(nodes, mid + 1, end);

//     return curr;
// }

// void getInorder(Node *root, vector<int> &nodes)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     getInorder(root->left, nodes);
//     nodes.push_back(root->data);
//     getInorder(root->right, nodes);
// }

// void preOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// Node *balanceBST(Node *root)
// {
//     // get Inorder Sequence
//     vector<int> nodes;
//     getInorder(root, nodes);

//     return BSTfromSortedVec(nodes, 0, nodes.size() - 1);
// }

// int main()
// {
//     Node *root = new Node(6);
//     root->left = new Node(5);
//     root->left->left = new Node(4);
//     root->left->left->left = new Node(3);

//     root->right = new Node(7);
//     root->right->right = new Node(8);
//     root->right->right->right = new Node(9);

//     root = balanceBST(root);

//     cout << "Balance Binary We got in preorder is given as - " << endl;
//     preOrder(root);
//     cout << endl;

//     /*
//     Balance Binary We got in preorder is given as -
//     6 4 3 5 8 7 9

//      */
// }

// ____________ ____________ ____________ ____________ ____________

// 9) Size of Largest BSt in BT -

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

// class Info
// {
// public:
//     bool isBST;
//     int min;
//     int max;
//     int sz;

//     Info(bool isBST, int min, int max, int sz)
//     {
//         this->isBST = isBST;
//         this->min = min;
//         this->max = max;
//         this->sz = sz;
//     }
// };

// int maxSize = 0;

// Info *largestBST(Node *root)
// {
//     if (root == NULL)
//     {
//         return new Info(true, INT_MAX, INT_MIN, 0);
//     }
//     // OR another base case
//     /* if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->left == NULL && root->right)
//     {
//         new Info(true, root->data, root->data, 1);
//     }
//  */

//     Info *leftInfo = largestBST(root->left);
//     Info *rightInfo = largestBST(root->right);

//     int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
//     int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
//     int currSz = leftInfo->sz + rightInfo->sz + 1;

//     if (leftInfo->isBST && rightInfo->isBST &&
//         root->data > leftInfo->max && root->data < rightInfo->min)
//     {
//         maxSize = max(maxSize, currSz);
//         return new Info(true, currMin, currMax, currSz);
//     }

//     return new Info(false, currMin, currMax, currSz);
// }

// int main()
// {
//     Node *root = new Node(50);
//     root->left = new Node(30);
//     root->left->left = new Node(5);
//     root->left->right = new Node(20);

//     root->right = new Node(60);
//     root->right->left = new Node(45);
//     root->right->right = new Node(70);
//     root->right->right->left = new Node(65);
//     root->right->right->right = new Node(80);

//     largestBST(root);
//     cout << "max size: " << maxSize << endl;
//     return 0;
//     /*
//     max size: 5

//     */
// }

// ____________ ____________ ____________ ____________ ____________

// 9.1) Largest Root of BSt  in BT -

// ____________ ____________ ____________ ____________ ____________

// 10) Merge  2 BST's -

// class Node
// {
// public:
//     int data;
//     Node *left, *right;
//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// // Inorder traversal to store elements
// void getInorder(Node *root, vector<int> &nodes)
// {
//     if (root == NULL)
//         return;
//     getInorder(root->left, nodes);
//     nodes.push_back(root->data);
//     getInorder(root->right, nodes);
// }

// // Convert sorted vector to balanced BST
// Node *BSTfromSortedVec(vector<int> &nodes, int st, int end)
// {
//     if (st > end)
//         return NULL;
//     int mid = st + (end - st) / 2;
//     Node *curr = new Node(nodes[mid]);
//     curr->left = BSTfromSortedVec(nodes, st, mid - 1);
//     curr->right = BSTfromSortedVec(nodes, mid + 1, end);
//     return curr;
// }

// // Merge two BSTs
// Node *mergeBST(Node *root1, Node *root2)
// {
//     vector<int> nodes1, nodes2, merged;
//     getInorder(root1, nodes1);
//     getInorder(root2, nodes2);

//     // Merge sorted arrays
//     int i = 0, j = 0;
//     while (i < nodes1.size() && j < nodes2.size())
//     {
//         if (nodes1[i] < nodes2[j])
//             merged.push_back(nodes1[i++]);
//         else
//             merged.push_back(nodes2[j++]);
//     }
//     while (i < nodes1.size())
//         merged.push_back(nodes1[i++]);
//     while (j < nodes2.size())
//         merged.push_back(nodes2[j++]);

//     // Build balanced BST from merged array
//     return BSTfromSortedVec(merged, 0, merged.size() - 1);
// }

// // Print inorder
// void inorderPrint(Node *root)
// {
//     if (!root)
//         return;
//     inorderPrint(root->left);
//     cout << root->data << " ";
//     inorderPrint(root->right);
// }

// void preorderPrint(Node *root)
// {
//     if (!root)
//         return;
//     cout << root->data << " ";
//     preorderPrint(root->left);
//     preorderPrint(root->right);
// }

// int main()
// {
//     // Your given BSTs
//     Node *root1 = new Node(2);
//     root1->left = new Node(1);
//     root1->right = new Node(4);

//     Node *root2 = new Node(9);
//     root2->left = new Node(3);
//     root2->right = new Node(12);

//     // Merge and print
//     Node *mergedRoot = mergeBST(root1, root2);

//     cout << "Inorder of merged BST: ";
//     inorderPrint(mergedRoot);
//     cout << "\n";

//     cout << "Preorder of merged BST: ";
//     preorderPrint(mergedRoot);
//     cout << "\n";

//     return 0;
//     /*

// Inorder of merged BST: 1 2 3 4 9 12
// Preorder of merged BST: 3 1 2 9 4 12

//     */
// }

// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________