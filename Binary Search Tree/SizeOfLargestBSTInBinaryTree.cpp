class NodeValue
{
    public:
        int maxSize,minNode,maxNode;

        NodeValue(int minNode, int maxNode, int maxSize)
        {
            this->minNode = minNode;
            this->maxNode = maxNode;
            this->maxSize = maxSize;
        }
};
class Solution
{
    private:
        NodeValue largestSubtreeHelper(TreeNode* root)
        {
            //An empty tree is a BST of size 0
            if(!root)
                return NodeValue(INT_MAX,INT_MIN,0);

            //Get values form right and left subtree of current tree
            auto left = largestSubtreeHelper(root->left);
            auto right = largestSubtreeHelper(root->right);

            //Current node is >max in left and <min in right, i.e., it is a BST
            if(left.maxNode<root->val && root->val<right.minNode)
            {
                //It is a BST
                return NodeValue(min(root->val,left.minNode),max(root->val,left.maxNode),left.maxSize+right.maxSize+1);
            }
            //Otherwise return [-inf,inf] so that parent can't be valid BST
            return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
        }
    public:
        int maxSumBST(TreeNode* root)
        {
            return largestSubtreeHelper(root).maxSize;
        }
};
