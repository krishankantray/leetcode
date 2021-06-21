class Solution {
public:
    void recur(vector<int>&candidates, int &target, int start, int sum, vector<int>temp, vector<vector<int> > &ans){
        if(start==candidates.size() || sum>target) return ;
        if(sum==target){
            ans.push_back(temp) ; 
            return ;
        }
        // for(int x:temp) cout<<x<<", " ;
        //     cout<<endl;   
        
        for(int i=start; i<candidates.size(); i++){
            temp.push_back(candidates[i]);    
            recur(candidates, target, i, sum+candidates[i], temp, ans) ;
            temp.pop_back(); 
        }
 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > ans ;
        recur(candidates, target, 0, 0, vector<int>(), ans) ;
        return ans ; 
    }
};