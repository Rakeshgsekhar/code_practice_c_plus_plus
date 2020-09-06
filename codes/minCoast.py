class Solution:
    def minCost(self, s, cost):
        ans = 0
        for i in range(len(s) - 1): 
            if (s[i] == s[i + 1]):  
                ans += min(cost[i],cost[i+1])
          
        return ans 
s = Solution()
print(s.minCost("abaac",[1,2,3,4,5]))
print(s.minCost("abc",[1,2,3]))
print(s.minCost("abc",[1,2,3]))
