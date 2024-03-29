//Normal
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> v(n);
    stack<long long> s;

    for (int i=n - 1; i>=0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
            v[i] = -1;
        else
            v[i] = s.top();
        s.push(arr[i]);
    }
    return v;
}
