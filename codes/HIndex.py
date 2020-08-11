class Solution:
    def hIndex(self, citations):
        #citations = sorted(citations)
        hindex = 0
        length = len(citations)
        memo = [0]*(length+1)
        for i in (citations):
            memo[min(length,i)] +=1

        for i in range(length,-1,-1):
            hindex +=memo[i]
            if hindex >= i:
                return i
        return 0

s = Solution()
print(s.hIndex([3,0,6,1,5]))
                
