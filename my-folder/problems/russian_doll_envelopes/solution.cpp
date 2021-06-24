class Solution {
public:
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end()) ; 
        int n=envelopes.size() ; 
        vector<int>lis(n, 1) ; 
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(envelopes[j][1]<envelopes[i][1] && envelopes[j][0]<envelopes[i][0]){
                    lis[i] = max(lis[i], lis[j]+1) ; 
                }
            }
        }
        return *max_element(lis.begin(), lis.end()) ; 
    }
};