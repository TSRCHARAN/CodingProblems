//Function to return a list containing elements of left view of the binary tree.
void fun(Node *node,int level,vector<int>&res)
{
    if(node==NULL)
        return;
    if(level==res.size())
    {
        res.push_back(node->data);
    }
    fun(node->left,level+1,res);
    fun(node->right,level+1,res);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>res;
   fun(root,0,res);
   return res;
}
