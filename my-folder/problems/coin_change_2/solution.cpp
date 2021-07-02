class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size() ; 
        int dp[n+1][amount+1] ;
        dp[0][0]=1 ; 
        for(int i=0; i<=amount; i++) dp[0][i]=0 ; 
        for(int i=0; i<=n; i++) dp[i][0]=1 ;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=amount; j++){
                if(j-coins[i-1] >= 0)
                    dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j] ; 
                else dp[i][j] = dp[i-1][j] ; 
            }
        }
        /*for(int i=0; i<=n; i++){
            cout<<endl; 
            for(int j=0; j<=amount; j++){
                cout<<dp[i][j]<<" " ;
            }
        }*/
        return dp[n][amount] ; 
    }
};