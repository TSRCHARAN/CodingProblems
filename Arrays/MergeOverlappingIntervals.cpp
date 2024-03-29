vector<vector<int>> merge(vector<vector<int>>& intervals)
{
        vector<vector<int>>ans;
        int m=intervals.size();
        if(m==0)
            return ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(ans[j][1]>=intervals[i][0])
            {
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            }
            else
            {
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
}
