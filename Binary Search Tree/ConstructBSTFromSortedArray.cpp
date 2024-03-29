TreeNode* sortedArrayToBST(vector<int>& nums)
{
        return sortedArrayToBST(nums,0,nums.size()-1);
}

TreeNode* sortedArrayToBST(vector<int>&nums, int left, int right)
{
        if(left>right)
            return NULL;

        int mid = (left+right)/2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = sortedArrayToBST(nums,left,mid-1);

        root->right = sortedArrayToBST(nums,mid+1,right);

        return root;
}
