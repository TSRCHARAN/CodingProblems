class BSTIterator
{
    private:
        stack<TreeNode*>myStack;
        //reverse == true ->before;
        //reverse == false ->next;
        bool reverse=true;
    public:
        BSTIterator(TreeNode* root,int isReverse)
        {
            reverse=isReverse;
            pushAll(root);
        }
        bool hasNext()
        {
            return !myStack.empty();
        }
        int next()
        {
            TreeNode* tmpNode = myStack.top();
            myStack.pop();
            if(reverse==false)
                pushAll(tmpNode->right);
            else
                pushAll(tmpNode->left);
            return tmpNode->val;
        }
    private:
        void pushAll(TreeNode* node)
        {
            for(;node!=NULL;)
            {
                myStack.push(node);
                if(reverse==true)
                    node=node->right;
                else
                    node=node->left;
            }
        }
};
class Solution
{
    public:
        bool findTarget(TreeNode* root, int k)
        {
            if(!root)
                return false;

            BSTIterator l(root,false);//next
            BSTIterator r(root,true);//before

            int i=l.next();
            int j=r.next();//l.before

            while(i<j)
            {
                if(i+j==k)
                    return true;
                else if(i+j>k)
                    j=r.next();
                else
                    i=l.next();
            }
            return false;
        }
};
