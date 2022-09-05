int findCeil(TreeNode *root,int key)
{
    int ceil=-1;
    while(root)
    {
        if(root->val==key)
        {
            ceil=root->val;
            return ceil;
        }
        if(root->val>key)
        {
            ceil=root->val;
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return ceil;
}
