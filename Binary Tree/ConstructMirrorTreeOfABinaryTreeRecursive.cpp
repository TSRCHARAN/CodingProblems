void mirror(Node* node)
{
        // code here
        if (node == NULL)
            return;

        Node* temp;

        mirror(node->left);
        mirror(node->right);

        temp=node->left;
        node->left=node->right;
        node->right=temp;
}
