int isSumProperty(Node *root)
{
     // Add your code here
        if(root==NULL || root->left==NULL and root->right==NULL) return 1;

        int a=root->left!=NULL?root->left->data:0;
        int b=root->right!=NULL?root->right->data:0;

        return (root->data==a+b) and isSumProperty(root->left) and isSumProperty(root->right);
}
