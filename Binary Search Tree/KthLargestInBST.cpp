int ans;
int kthLargest(Node *root, int k)
{
        //Your code here
        order(root,k);
        return ans;
}
void order(Node* root,int &k)
{
        if(!root)
            return;

        order(root->right,k);

        if(--k==0)
        {
            ans=root->data;
            return;
        }

        order(root->left,k);
}
