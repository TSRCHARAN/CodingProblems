void flatten(TreeNode* root)
{
        TreeNode* cur = root;

        while(cur)
        {
            if(cur->left)
            {
                TreeNode *prev = cur->left;
                while(prev->right)
                {
                    prev=prev->right;
                }
                prev->right = cur->right;
                cur->right = cur->left;
                cur->left = NULL;
            }
            cur = cur->right;
        }
}
