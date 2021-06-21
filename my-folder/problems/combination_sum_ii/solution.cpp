class Solution {
public:
    void recur(vector<int>&candidates, int &target, int start, int sum, vector<int>temp, vector<vector<int> > &ans ){
        
        if(sum==target) {
            ans.push_back(temp); 
        }
        
        if(start==candidates.size() || sum>target) return ; 
        
        for(int i=start; i<candidates.size(); i++){
            if(i&&candidates[i]==candidates[i-1]&&i>start) continue ; 
            temp.push_back(candidates[i]);
            recur(candidates, target, i+1, sum+candidates[i], temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int> > ans ;
        // set<int>test(candidates.begin(), candidates.end()) ; 
        // candidates = vector<int>(test.begin(), test.end()) ; 
         sort(candidates.begin(), candidates.end()) ; 
        recur(candidates, target, 0, 0, vector<int>(), ans);
        return ans; 
    }
};