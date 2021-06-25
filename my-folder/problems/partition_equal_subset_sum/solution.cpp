class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ; 
        for(int x:nums) sum+=x ; 
        if(sum%2 == 1) return false ;
        sum=sum/2 ; 
        vector<bool>dp(sum+1, false) ; 
        dp[0] = true ; 
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>sum) return false; 
            for(int j=sum; j>0; j--){
                if(j-nums[i]>=0)
                    dp[j] = dp[j] || dp[j-nums[i]] ; 
            }
        }
        return dp[sum] ; 
    }
};