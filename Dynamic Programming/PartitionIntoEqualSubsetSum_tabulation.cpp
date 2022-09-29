bool subsetSumToK(int n,int k, vector<int>& nums)
{
        vector<vector<bool>>dp(n,vector<bool>(k+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if(nums[0]<=k)
        {
            dp[0][nums[0]]=true;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int target=1;target<=k;target++)
            {
                bool notPick = dp[ind-1][target];

                bool pick = false;

                if(nums[ind]<=target)
                    pick = dp[ind-1][target-nums[ind]];

                dp[ind][target] = pick | notPick;
            }
        }
        return dp[n-1][k];
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
