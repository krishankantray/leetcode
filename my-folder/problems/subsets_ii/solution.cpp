class Solution {
public:
    void recur(vector<int>nums, int start, vector<int>temp, vector<vector<int> > &ans){
        ans.push_back(temp);
        for(int i=start; i<nums.size(); i++){
            if(i!=start && nums[i]==nums[i-1] ) continue ; 
            temp.push_back(nums[i]);
            recur(nums, i+1, temp, ans);
            temp.pop_back(); 
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > ans ;
        if(nums.size()==0) return ans ;
        sort(nums.begin(), nums.end()) ; 
        recur(nums, 0, vector<int>() ,ans);
        return ans; 
    }
};