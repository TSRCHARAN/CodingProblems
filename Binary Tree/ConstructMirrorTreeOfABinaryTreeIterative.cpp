void mirror(Node* root)
{
        // code here
        if (root == NULL)
        return;

        queue<Node*> q;
        q.push(root);

        // Do BFS. While doing BFS, keep swapping
        // left and right children
        while (!q.empty())
        {
            // pop top node from queue
            Node* curr = q.front();
            q.pop();

            // swap left child with right child
            swap(curr->left, curr->right);

            // push left and right children
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
}
