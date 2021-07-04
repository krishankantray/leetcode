class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1, INT_MAX) ; 
        dp[0]=0 ; 
        for(int i=1; i<sqrt(n)+1; i++){
            for(int j=1; j<=n; j++){
                if(j-(i*i) >=0){
                    if(1+dp[j-(i*i)] < dp[j])
                        dp[j] = 1+dp[j-(i*i)] ;
                }
            }
        }
        
        return dp[n] ; 
    }
};