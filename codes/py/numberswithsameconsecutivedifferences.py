class Solution:
    def numsSameConsecDiff(self, N, K):
        temp = range(10)
        for i in range(N-1):
            temp = {x*10+y for x in temp for y in [x%10+K,x%10-K] if x and 0<=y<10}

        return list(temp)

s =  Solution()
print(s.numsSameConsecDiff(3,7))
