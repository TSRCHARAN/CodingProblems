Node* connect(Node* root)
{
        if(root==NULL)
            return root;

        Node* left=root->left;
        Node* right=root->right;
        Node* next=root->next;

        if(left)
        {
            left->next = right;

            if(next)
            {
                right->next = next->left;
            }

            connect(left);
            connect(right);
        }

        return root;
}
