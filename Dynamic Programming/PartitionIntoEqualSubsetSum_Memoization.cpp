bool f(int ind, int sum, vector<int>& nums, vector<vector<int>>&dp)
{
        if(sum==0)
            return true;
        if(ind==0)
            return nums[0]==sum;
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        bool notPick = f(ind-1,sum,nums,dp);

        bool pick = false;
        if(nums[ind]<=sum)
            pick = f(ind-1,sum-nums[ind],nums,dp);

        return dp[ind][sum] = pick | notPick;
}
bool subsetSumToK(int n,int k, vector<int>& nums)
{
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return f(n-1,k,nums,dp);
}
bool canPartition(vector<int>& nums)
{
        int totSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            totSum+=nums[i];
        }
        if(totSum%2==1)
            return false;

        return subsetSumToK(n,totSum/2,nums);
}
