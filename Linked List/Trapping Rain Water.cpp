int trap(vector<int>& a)
{
        int res=0;
        int left=0,right=a.size()-1;
        int left_max=0,right_max=0;
        while(left<=right)
        {
            if(a[left]<a[right])
            {
                if(a[left]>=left_max)
                    left_max=a[left];
                else
                    res+=left_max-a[left];
                left++;
            }
            else
            {
                if(a[right]>=right_max)
                    right_max=a[right];
                else
                    res+=right_max-a[right];
                right--;
            }
        }
        return res;
}
