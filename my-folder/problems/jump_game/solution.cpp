class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(); 
        vector<bool>track(n, false) ; 
        int mx = 0 ; 
        for(int i=0; i<n; i++){
            if(i>mx) return false; 
            mx = max(i+nums[i], mx) ; 
        }
        return true; 
    }
};