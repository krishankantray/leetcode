class Solution {
public:
    void recur(int n, int k, int start,  vector<int>temp, vector<vector<int> > &ans){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        //if(start==n) return;
        for(int i=start; i<=n; i++){
            temp.push_back(i);
            recur(n,k,i+1, temp, ans) ;
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int> > ans ;
        recur(n,k,1,vector<int>(),ans);
        return ans;
    }
};