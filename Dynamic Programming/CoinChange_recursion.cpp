int f(int ind, int t, vector<int>& coins)
{
        if(ind==0)
        {
            if(t%coins[0]==0)
                return t/coins[0];
            return 1e9;
        }

        int notTake = 0 + f(ind-1,t,coins);
        int take = INT_MAX;
        if(coins[ind]<=t)
            take = 1 + f(ind,t-coins[ind],coins);

        return min(take,notTake);
}
int coinChange(vector<int>& coins, int amount)
{
        int n = coins.size();
        int ans = f(n-1,amount,coins);
        if(ans>=1e9)
            return -1;
        return ans;
}
