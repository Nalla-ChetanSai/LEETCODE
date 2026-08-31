class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = float('inf')
        profit = 0
        for sell in prices:
            if buy > sell:
                buy = sell
            elif sell - buy > profit:
                profit = sell - buy
        return profit