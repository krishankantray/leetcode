class Solution {
public:
    void recur(vector<int>&arr, int &target, int start, int curSum, vector<int>cur, vector<vector<int>>&ans){
        if(curSum==target){
            ans.push_back(cur) ;
            return ;
        }
        if(curSum>target) return ;
        
        for(int i=start; i<arr.size(); i++){
            if(arr[i]+curSum <= target){
                cur.push_back(arr[i]);
                recur(arr,target,i, curSum+arr[i], cur, ans) ; 
                cur.pop_back() ;
            }
                
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ; 
        vector<int> temp ; 
        recur(candidates, target, 0, 0, temp, ans) ;
        return ans; 
    }
};