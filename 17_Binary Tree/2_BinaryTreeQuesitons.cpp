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

// 6) Diameter of a tree -
// in o(N^2) -

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

// int diam1(Node *root) // O(n^2)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int currDiam = height(root->left) + height(root->right) + 1; // O(n)
//     int leftDiam = diam1(root->left);
//     int rightDiam = diam1(root->right);

//     return max(currDiam, max(leftDiam, rightDiam));
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "So, the diameter of the above tree is - " << diam1(root) << endl;
//     /*
//     So, the diameter of the above tree is - 5
//     TC - O(n^2) - bcause for every node its simlar and perfomed in Constant time
//     but for Height waala function is calling againa nd again so for n nodes
//     it'll call n times therefore complexity O(n^2)
//      */
// }

// -------------------

// 6.1) Diameter of a tree -
// in o(N^2) -

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

// pair<int, int> diam2(Node *root) // O(n) * 1 = O(n)

// {
//     if (root == NULL)
//     {
//         return make_pair(0, 0);
//     }

//     // (diameter, Height)
//     pair<int, int> leftInfo = diam2(root->left);   // (LD,LH)
//     pair<int, int> rightInfo = diam2(root->right); // (RD,RH)

//     int currDiam = leftInfo.second + rightInfo.second + 1;               // we know currDiam  = left ki Height + Right ki Height + 1
//     int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first)); // and for final diam - maximum of left ka diam, right ka diam
//     int finalHt = max(leftInfo.second, rightInfo.second) + 1;

//     return make_pair(finalDiam, finalHt);
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     cout << "Diameter is - " << diam2(root).first << endl;
//     /*
//     Diameter is - 5

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 7) Subtree of ANother Tree -

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

// bool isIdentical(Node *root1, Node *root2)
// {
//     if (root1 == NULL && root2 == NULL)
//     {
//         return true;
//     }
//     else if (root1 == NULL || root2 == NULL)
//     {
//         return false;
//     }

//     if (root1->data != root2->data)
//     {
//         return false;
//     }
//     return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
// }

// bool isSubTree(Node *root, Node *subRoot)
// {
//     if (root == NULL && subRoot == NULL)
//     {
//         return true;
//     }
//     else if (root == NULL || subRoot == NULL)
//     {
//         return false;
//     }

//     if (root->data == subRoot->data) // if it true so found the subroot now need to check identical or not
//     {
//         // Identical for subRoot
//         if (isIdentical(root, subRoot))
//         {
//             cout << "Yes SubTree/SubRoot exist" << endl;
//             return true;
//         }
//     }
//     int isLeftSubTree = isSubTree(root->left, subRoot);
//     if (!isLeftSubTree)
//     {
//         return isSubTree(root->right, subRoot);
//     }

//     return true;
// }

// int main()
// {
//     vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//     Node *root = buildTree(nodes);

//     // Creating a SubRoot First  -
//     Node *subRoot = new Node(2);
//     subRoot->left = new Node(4);
//     subRoot->right = new Node(5);

//     cout << isSubTree(root, subRoot) << endl;
//     /*
//     Yes SubTree/SubRoot exist
//     1

//     */
//     // -------------------
//     /*  Checking for the case where no subroot exist by creating another one -
//     Node *subRoot = new Node(2);
//     subRoot->left = new Node(4);
//     // o/p - 0; */
// }
// ____________ ____________ ____________ ____________ ____________

// 8) Map in Cpp -

// int main()
// {
//     map<int, string> m;

//     m[101] = "Microsoft";
//     m[115] = "Atallasian";
//     m[120] = "Adobe";

//     cout << m[115] << endl; // Atallasian

//     m[115] = "Intuit";
//     cout << m[115] << endl; // Intuit

//     cout << m.count(101) << endl; // 1
//     cout << m.count(125) << endl; // 0

//     for (auto i : m)
//     {
//         cout << "Keys are - " << i.first << "," << i.second << endl;
//     }

//     for (auto i : m)
//     {
//         cout << "Onle the keys are - " << i.first << endl;
//     }

//     for (auto i : m)
//     {
//         cout << "The Pair is - " << i.second << endl;
//     }
// }
// ____________ ____________ ____________ ____________ ____________

// 9) Top view of a Tree -
/*
For the root the Horzontal distance is always 0. For any Node if having non unique HD value then it'ss hiding from the top view.

 */

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

void topView(Node *root)
{
    if (!root)
        return;

    queue<pair<Node *, int>> q; // Node with Horizontal Distance
    map<int, int> m;            // Horizontal Distance -> Node->data

    q.push({root, 0});
    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();

        Node *currNode = curr.first;
        int currHd = curr.second;

        if (m.count(currHd) == 0) // First time this HD is seen
        {
            m[currHd] = currNode->data;
        }

        if (currNode->left)
        {
            q.push({currNode->left, currHd - 1});
        }

        if (currNode->right)
        {
            q.push({currNode->right, currHd + 1});
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createtree(nodes);

    cout << "Top View: ";
    topView(root);

    /*
    Root is - 1
    Top View: 4 2 1 3 6

     */
}
// ____________ ____________ ____________ ____________ ____________

// 10) Bottom view of a Tree -
