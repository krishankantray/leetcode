class Solution {
public:
    void recur(vector<int> &nums, int target, int start, int val, int &ans){
        if(start==nums.size()){
            if(val==target) ans++; 
            return ;
        }
        recur(nums, target, start+1, val+nums[start], ans);
        recur(nums, target, start+1, val-nums[start], ans);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0; 
        recur(nums, target, 0, 0, ans) ;
        return ans ;
    }
};