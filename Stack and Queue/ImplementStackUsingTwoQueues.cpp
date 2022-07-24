// stack using two queues.

void QueueStack :: push(int x)
{
        // Your Code
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q=q1;
        q1=q2;
        q2=q;
}

int QueueStack :: pop()
{
        // Your Code
        if (q1.empty())
            return -1;
        int c=q1.front();
        q1.pop();
        return c;
}
