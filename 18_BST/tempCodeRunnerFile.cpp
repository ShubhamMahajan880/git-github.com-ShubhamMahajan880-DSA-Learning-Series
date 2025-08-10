Node *delnode(Node *root, int todelete)
{
    if (root == NULL)
    {
        cout << "Node " << todelete << " not found.\n";
        return NULL;
    }

    if (todelete < root->data)
    {
        root->left = delnode(root->left, todelete);
    }
    else if (todelete > root->data)
    {
        root->right = delnode(root->right, todelete);
    }
    else
    {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // Case 2: One child
        if (root->left == NULL || root->right == NULL)
        {
            Node *child;
            if (root->left != NULL)
            {
                child = root->left;
            }
            else
            {
                child = root->right;
            }
            delete root;
            return child;
        }
        // Case 3: Two children
        Node *IS = inordersuccessor(root->right);
        root->data = IS->data;
        root->right = delnode(root->right, IS->data);
    }
    return root;
}