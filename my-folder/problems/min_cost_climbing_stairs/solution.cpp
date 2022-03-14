class Solution {
public:
    vector<int>dp = vector<int>(1001, -1);
    int recur(vector<int>&cost, int cur){
        if(cur>= cost.size()) return 0;
        if(dp[cur] != -1) return dp[cur];
        int oneStep = cost[cur] + recur(cost, cur+1) ;
        int twoStep = cost[cur] + recur(cost, cur+2) ;
        dp[cur] = min(oneStep, twoStep);
        // cout<<dp[cur];
        return dp[cur];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(recur(cost, 0), recur(cost, 1));
    }
};