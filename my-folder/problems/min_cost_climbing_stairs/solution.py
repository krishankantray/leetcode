class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        dp = [0]*(n+1)
        i=2
        while i<=n:
            dp[i] = min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2])
            i+=1
        return dp[n]