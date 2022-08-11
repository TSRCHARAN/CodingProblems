vector<int> postorderTraversal(TreeNode* root)
{
          vector<int>postOrder;
          if (root == NULL)
              return postOrder;

          stack<TreeNode*> s1;
          stack<TreeNode*> s2;
          s1.push(root);

          while (!s1.empty())
          {
                root = s1.top();
                s1.pop();
                s2.push(root);
                if (root -> left != NULL)
                  s1.push(root -> left);
                if (root -> right != NULL)
                  s1.push(root -> right);
          }

          while (!s2.empty())
          {
            postOrder.push_back(s2.top() -> val);
            s2.pop();
          }
          return postOrder;
}
