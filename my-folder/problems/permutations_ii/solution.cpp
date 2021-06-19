class Solution {
public:
    void recur(vector<int>nums, int start, vector<vector<int> >&ans ){
        if(start==nums.size()){
            ans.push_back(nums);
            return; 
        } 
        for(int i=start; i<nums.size(); i++){            
            if(i!=start && nums[i]==nums[start]) continue ; 
            swap(nums[start], nums[i]) ;
            recur(nums, start+1, ans); 
            // swap(nums[start], nums[i]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> >ans ;
        if(nums.size()==0) return ans ; 
        sort(nums.begin(), nums.end()) ; 
        recur(nums, 0, ans);
        // set<vector<int> > st(ans.begin(), ans.end());
        // ans = vector<vector<int> > (st.begin(), st.end()) ;
        return ans; 
    }
};