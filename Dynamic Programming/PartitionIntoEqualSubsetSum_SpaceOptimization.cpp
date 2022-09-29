bool subsetSumToK(int n,int k, vector<int>& nums)
{
        vector<bool>prev(k+1,0),cur(k+1,0);

        prev[0]=cur[0]=0;

        if(nums[0]<=k)
        {
            prev[nums[0]]=true;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int target=1;target<=k;target++)
            {
                bool notPick = prev[target];

                bool pick = false;

                if(nums[ind]<=target)
                    pick = prev[target-nums[ind]];

                cur[target] = pick | notPick;
            }
            prev=cur;
        }
        return prev[k];
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
