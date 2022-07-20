int search(vector<int>& a, int target)
{
        int low=0;
        int high=a.size()-1;

        while(low<=high)
        {
            int mid=(low+high)>>1;

            if(a[mid]==target)
                return mid;

            // the left side is sorted
            if(a[low]<=a[mid])
            {
                // Figure out if element lies on left half or not
                if(target>=a[low] && target<=a[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            // the right is sorted
            else
            {
                if(target>=a[mid] && target<=a[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
}
