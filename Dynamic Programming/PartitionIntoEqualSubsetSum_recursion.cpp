bool f(int ind, int sum, vector<int>& nums)
{
        if(sum==0)
            return true;
        if(ind==0)
            return nums[0]==sum;

        bool notPick = f(ind-1,sum,nums);

        bool pick = false;
        if(nums[ind]<=sum)
            pick = f(ind-1,sum-nums[ind],nums);

        return pick | notPick;
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

        return f(n-1,totSum/2,nums);
}
