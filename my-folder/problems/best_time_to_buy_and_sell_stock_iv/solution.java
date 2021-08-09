class Solution {
    public int maxProfit(int k, int[] prices) {
        int n=prices.length ;
        int [][]dp = new int[k+1][n+1] ;
        for(int i=0; i<=k; i++){
            int mx = Integer.MIN_VALUE ; 
            for(int j=0; j<=n; j++){
                if(i==0 || j==0){
                    dp[i][j]=0 ;
                    continue; 
                }
                mx = Math.max(mx, dp[i-1][j-1]-prices[j-1]) ;
                dp[i][j]= Math.max(dp[i][j-1], mx+prices[j-1]) ; 
            }
        }
        // for(int i=0; i<=k; i++){
        //     for(int j=0; j<=n; j++)
        //         System.out.print(dp[i][j]+", ") ; 
        //     System.out.println(); 
        // }
        return dp[k][n] ; 
    }
}