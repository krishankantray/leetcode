class Solution {
public:
    void recur(vector<int>nums, int start, vector<int>temp, vector<vector<int> > &ans){
        ans.push_back(temp);

        for(int i=start; i<nums.size(); i++){
            temp.push_back(nums[i]);
            recur(nums, i+1,temp, ans);
            temp.pop_back(); 
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int> > ans ;
        if(nums.size()==0) return ans ;
        vector<int> temp ;
        recur(nums, 0, temp, ans) ;
        return ans; 
    }
};