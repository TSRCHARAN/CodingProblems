int floor(TreeNode* root,int key)
{
    int floor=-1;
    while(root)
    {
        if(roo->val==key)
        {
            floor=root->val;
            return floor;
        }
        else if(root->val >key)
        {
            root=root->left;
        }
        else
        {
            floor=root->val;
            root=root->right;
        }
    }
    return floor;
}
