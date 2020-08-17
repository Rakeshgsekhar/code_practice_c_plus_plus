class Solution:
    def maxProfit(self, prices):
        firstBuy,firstSell = float("-inf"),0
        secondBuy,secondSell = float("-inf"),0
        for price in prices:
            firstBuy = max(firstBuy,-price)
            firstSell = max(firstSell,firstBuy+price)
            secondBuy = max(secondBuy,firstSell-price)
            secondSell = max(secondSell,secondBuy+price)

        return secondSell

s= Solution()
print(s.maxProfit([3,3,5,0,0,3,1,4]))
