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

void Preordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preordertraversal(root->left);
    Preordertraversal(root->right);
}

void Inordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inordertraversal(root->left);
    cout << root->data << " ";
    Inordertraversal(root->right);
}

void PostOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

void levelOrderTeaveresal(Node *root)
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

void anotherlevelordertraversal(Node *root)
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

    cout << "the Root of the Ndoe is - " << root->data << endl;
    cout << "___________" << endl;

    cout << "Pre order Traversal for Elemenets is - " << endl;
    Preordertraversal(root);
    cout << "___________" << endl;

    cout << "TheInordeertraversal of elements are - " << endl;
    Inordertraversal(root);
    cout << "___________" << endl;

    cout << "The PpostOrderTraveerdal of elements are - " << endl;
    PostOrderTraversal(root);
    cout << "___________" << endl;

    cout << "Sorting after Level Oreder Trraversal is - " << endl;
    levelOrderTeaveresal(root);
    cout << "___________" << endl;

    cout << "Using ANother Level Order Traversal the Elements of the Tree are given as - " << endl;
    anotherlevelordertraversal(root);
    cout << "___________" << endl;
}