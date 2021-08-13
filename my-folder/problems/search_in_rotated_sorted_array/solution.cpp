class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return nums[0]==target ? 0 : -1 ;
        // search for pivot
        int l=0, r=n-1 ;
        int mid; 
        while(l<r){
            mid=(l+r)/2 ; 
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else
                r=mid ; 
        }
        int pivot = l ; 
        l=0, r=n-1 ; 
        if(target>=nums[pivot] && target<=nums[n-1]) 
            l=pivot; 
        else r=pivot;
        while(l<=r){
            mid=(l+r)/2 ;
            if(nums[mid]==target) return mid ;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1 ;
        }
        return -1 ; 
        
    }
};