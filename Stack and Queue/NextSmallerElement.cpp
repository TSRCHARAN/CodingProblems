vector<int> help_classmate(vector<int> v, int n)
{
        stack<int>s;
        vector<int> ans(n, -1);
        for (int i = n - 1; i >= 0; --i)
        {
            while (!s.empty() and s.top() >= v[i])
                s.pop();
            if (!s.empty())
                ans[i] = s.top();
            s.push(v[i]);
        }
        return ans;
}
