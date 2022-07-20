#include <bits/stdc++.h>
using namespace std;

bool isPossible(int a[], int n , int cows, int minDist)
{
    int cntCows=1;
    int lastPlacedCow=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-lastPlacedCow >= minDist)
        {
            cntCows++;
            lastPlacedCow=a[i];
        }
        if(cntCows==cows)
            return true;
    }
    return false;
}
int AggressiveCows(int a[],int n,int cows)
{
    sort(a,a+n);
    int low=1,high=a[n-1]-a[0];
    int res=0;

    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(isPossible(a,n,cows,mid))
        {
            res=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
}

int main()
{
    int a[]={1,2,4,8,9};
    int n=5;
    int cows=3;
    cout<<AggressiveCows(a,n,cows);
    return 0;
}
