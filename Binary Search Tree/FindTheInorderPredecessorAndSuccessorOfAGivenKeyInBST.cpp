void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    suc=NULL;
    pre=NULL;
    Node*p=root;
    while(p)
    {
        if(p->key>key)
        {
            suc=p;
            p=p->left;
        }
        else
        {
            p=p->right;
        }
    }
    while(root)
    {
        if(root->key<key)
        {
            pre=root;
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }

}
