class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool>mp;
        for(int x:nums) mp[x]=true ;
        int ans=0; 
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]-1) == mp.end()){
                int ct = nums[i]+1 ; 
                int cur = 1 ; 
                while(mp.find(ct) !=mp.end()){
                    ct++ ;
                    cur++ ;
                }
                ans = max(ans, cur) ; 
            }
        }
        return ans ; 
    }
};