#include <bits/stdc++.h>
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

void levelOrderTeaveresal(Node *root)
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

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = treecreation(nodes);
    cout << "Sorting after Level Oreder Trraversal is - " << endl;
    levelOrderTeaveresal(root);
    cout << "___________" << endl;
}