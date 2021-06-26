class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size() ; 
        int sum = accumulate(nums.begin(), nums.end(), 0) ;
        if(sum%k !=0) return false ; 
        sum /= k ; 
        vector<int>dp((1<<n) +1 , -1) ;
        dp[0]=0 ; 
        for(int i=0; i<(1<<n); i++){ 
            if(dp[i]==-1) continue ; 
            for(int j=0; j<n; j++){
                int isNumNotInSubset = ( (i&(1<<j)) == 0 ) ; 
                if(isNumNotInSubset){
                    if(dp[i]+nums[j] <= sum){
                        int newSubset = i|1<<j ; 
                        dp[newSubset] = (dp[i]+nums[j])==sum ? 0 : (dp[i]+nums[j]) ;  
                    }
                }
            }
        }
        // for(int i=0; i<(1<<n); i++) cout<<i <<"["<<dp[i]<<"]"<<" => "<<(bitset<5>(i).to_string())<<" dp[i] = "<< dp[i]<< endl ;

        return dp[(1<<n) -1]==0 ; 
    }
};