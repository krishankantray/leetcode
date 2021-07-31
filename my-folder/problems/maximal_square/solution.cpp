class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r=matrix.size() ;
        int c=matrix[0].size() ;
        int ans=0 ;
        vector<vector<int> > dp(r, vector<int>(c, 0)) ;  
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==0 || j==0){
                    dp[i][j]=matrix[i][j]-48 ; 
                }
                else {
                    if(matrix[i][j]-48==1){
                        dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1], dp[i-1][j-1])) ;
                    }
                }
                ans = max(ans, dp[i][j]) ;
                //cout<<dp[i][j]<<" "; 
            }
            //cout<<endl; 
        }
        return ans*ans ;
    }
};