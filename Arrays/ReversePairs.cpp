// Given an integer array nums, return the number of reverse pairs in the array.
//A reverse pair is a pair (i, j) where 0 <= i < j < nums.length and nums[i] > 2 * nums[j].

int reversePairs(vector<int>& nums)
{
    return mergeSort(nums,0,nums.size()-1);
}

int mergeSort(vector<int>&nums,int left,int right)
{
        if(left>=right) return 0;
        int mid=(left+right)/2;
        int inv=0;
        inv+=mergeSort(nums,left,mid);
        inv+=mergeSort(nums,mid+1,right);
        inv+=merge(nums,left,mid,right);
        return inv;
}

int merge(vector<int>&nums,int low,int mid,int high)
{
    int count=0;
    int j=mid+1,i,k;
    for(int i=low;i<=mid;i++)
    {
        while(j<=high && nums[i]>2LL*nums[j])
        {
            j++;
        }
        count+=(j-(mid+1));
    }
    int b[high+1],h;
    i=low,j=mid+1,k=low;
    while((i<=mid) && (j<=high))
    {
        if(nums[i]<nums[j])
        {
            b[k]=nums[i];
            i++;
        }
        else
        {
            b[k]=nums[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        for(h=j;h<=high;h++)
        {
            b[k]=nums[h];
            k++;
        }
    }
    else
    {
        for(h=i;h<=mid;h++)
        {
            b[k]=nums[h];
            k++;
        }
    }
    for(i=low;i<=high;i++)
    {
        nums[i]=b[i];
    }
    return count;
}
