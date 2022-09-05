int floor(Node* root, int key)
{
    if (!root)
        return INT_MAX;

    if (root->data == key)
        return root->data;

    if (root->data > key)
        return floor(root->left, key);

    int floorValue = floor(root->right, key);
    return (floorValue <= key) ? floorValue : root->data;
}
