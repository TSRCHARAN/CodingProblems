//Function to return a list containing elements of right view of the binary tree.
void fun(Node *node,int level,vector<int>&res)
{
    if(node==NULL)
        return;
    if(level==res.size())
    {
        res.push_back(node->data);
    }
    fun(node->right,level+1,res);
    fun(node->left,level+1,res);
}

vector<int> rightView(Node *root)
{
   // Your code here
   vector<int>res;
   fun(root,0,res);
   return res;
}
