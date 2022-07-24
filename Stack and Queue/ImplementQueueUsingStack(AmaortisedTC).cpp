//Amortised Time Complexity of O(1) for push, pop, top

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        if(output.empty()==false)
        {
            int c=output.top();
            output.pop();
            return c;
        }
        else
        {
            while(input.empty()==false)
            {
                output.push(input.top());
                input.pop();
            }
            int c=output.top();
            output.pop();
            return c;
        }
    }
};
