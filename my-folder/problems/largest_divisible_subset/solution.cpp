class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums;
        sort(nums.begin(), nums.end());
        vector<int>dp(n,1);
        int mx = INT_MIN;
        int mx_i=-1;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0)
                    dp[i]=max(dp[i], 1+dp[j]);
            }
            if(dp[i]>mx){
                mx=dp[i];
                mx_i=i;
            }
        }
        // for(int x:dp) cout<<x<<", ";
        vector<int>ans;
        int prev=mx_i;
        for(int k=mx_i; k>=0 && mx>0; k--){
            if(dp[k]==mx && nums[prev]%nums[k]==0){
                ans.insert(ans.begin(), nums[k]);
                mx--;
                prev=k;
            }
        }
        return ans;
    }
};