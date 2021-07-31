class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int r=mat.size() ;
        int c=mat[0].size() ;
        int dp[r][c] ; 
        int ones=0, sq=0 ;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==0 || j==0){
                    dp[i][j]=mat[i][j] ;
                }
                else if(mat[i][j]==1){
                    dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) +1 ;
                    if(dp[i][j]>1){
                        sq+=(dp[i][j]-1); 
                    }      
                }
                else dp[i][j]=0 ; 
                
                if(mat[i][j]==1) ones++ ;
            }
        }
        return ones+sq ; 
    }
};