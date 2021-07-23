class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size() ;
        vector<int>ans({-1,-1}) ; 
        if(n==0) return ans; 
        int l=0, h=n-1, lowAns=0, highAns=n-1 ;
        // lower bound
        while(l<=h){
            int m = h+(l-h)/2 ;
            if(nums[m]<target){
                lowAns=m;
                l=m+1;
            }
            else{
                h=m-1 ;
            }
        }
        
        // upper bound
        l=0, h=n-1 ;
        while(l<=h){
            int m=h+(l-h)/2 ;
            if(nums[m]>target){
                highAns = m ;
                h=m-1 ;
            }
            else{
                l=m+1 ;
            }
        }
        
        if(lowAns<0 || highAns>=n) return ans; 
        if(nums[lowAns]!=target){
            if(lowAns+1<n && nums[lowAns+1]==target) 
                lowAns+=1 ;
            else lowAns=-1 ; 
        } 
        if(nums[highAns]!=target){
            if(highAns-1>=0 && nums[highAns-1]==target)
                highAns-=1 ;
            else
                highAns=-1; 
        }
        ans[0]=lowAns, ans[1]=highAns ; 
        // if(highAns<lowAns) return ans ; 
        return ans ; 
    }
};