bool getPath(node * root, vector<int>&arr, int x)
{
    if(!root)
        return false;

    arr.push_back(root->data);

    if(root->data==x)
        return true;

    if(getPath(rott->left,arr,x)||getPath(root->right,arr,x))
        return true;

    arr.pop_back();//Left and right are not present

    return false;
}

vecot<int>solve(node *root, int x)
{
    vector < int > arr;

    if(!root)
        return arr;

    getPath(root, arr, x);
    return arr;

}
