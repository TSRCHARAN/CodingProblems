// Not optimal
vector<int> maxSlidingWindow(vector<int>& a, int k)
{

        int maxi;
        vector<int>ans;

        for(int i=0;i<a.size()-k+1;i++)
        {
            maxi=a[i];
            for(int j=i;j<i+k;j++)
            {
                maxi=max(a[j],maxi);
            }
            ans.push_back(maxi);
        }

        return ans;
}
