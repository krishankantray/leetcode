class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        min_ind = 0
        max_ind = 0
        profit=0
        for i in range(0, n):
            if prices[i] < prices[min_ind] :
                profit = max(profit, prices[max_ind] - prices[min_ind] )
                min_ind = i
                max_ind = i
            if prices[i] > prices[max_ind] :
                max_ind = i
        profit = max(profit, prices[max_ind] - prices[min_ind])
        return profit