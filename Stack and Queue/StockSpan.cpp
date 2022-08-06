class StockSpanner
{
    stack<pair<int,int>>span;

    public:

    StockSpanner()
    {

    }

    int next(int price)
    {
        int res=1;
        while(!span.empty() && price>=span.top().first)
        {
            res+=span.top().second;
            span.pop();
        }
        span.push({price,res});
        return res;
    }
};
