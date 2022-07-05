// Moore Majority Vote algorithm  or Moore Voting algorithm
int majorityElement(vector<int>& nums)
{
        int count=0;
        int el;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                el=nums[i];
            }
            if(el==nums[i])
            {
                count=count+1;
            }
            else
            {
                count=count-1;
            }
        }
        return el;
}
