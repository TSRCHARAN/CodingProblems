void fun(int ind, int sum, vector<int>&arr, int n, vector<int>&sumSubset)
{
        if(ind==n)
        {
            sumSubset.push_back(sum);//If we reach end then we will add to the subset
            return;
        }
        fun(ind+1,sum+arr[ind],arr,n,sumSubset);
        fun(ind+1,sum,arr,n,sumSubset);
}
vector<int> subsetSums(vector<int> arr, int N)
{
        // Write Your Code here
        vector<int>sumSubset;
        fun(0,0,arr,N,sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
}
