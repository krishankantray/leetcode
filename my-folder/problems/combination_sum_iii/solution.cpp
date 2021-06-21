class Solution {
public:
    void recur(int k, int n, int cur, vector<int>temp, vector<vector<int> > &ans){
        if(n==0 && k==0){
            ans.push_back(temp) ; 
        }
        for(int i=cur; i<=9; i++){
            temp.push_back(i);
            recur(k-1, n-i, i+1, temp, ans) ;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> > ans ;
        recur(k, n, 1, vector<int>(), ans) ;
        return ans ;
    }
};