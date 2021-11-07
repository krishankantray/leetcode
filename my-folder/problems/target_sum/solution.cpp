class Solution {
public:
    int recur(vector<int>&nums, int i, int target){
        if(target==0 && i==nums.size()) return 1;
        if(i>=nums.size()) return 0;
        // cout<<"i="<<i<<" :: "<<target<<endl; 
        return recur(nums, i+1, target-nums[i]) + recur(nums, i+1, target+nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return recur(nums, 0, target);
    }
};