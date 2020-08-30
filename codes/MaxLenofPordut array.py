import copy
import math
class Solution:
    def getMaxLen(self, nums):
        positive,negative = 0,0
        length = 0
        for n in nums:
            if  n == 0:
                positive,negative = 0,0
            elif n > 0:
                if negative > 0 : positive,negative = positive+1,negative+1
                else: positive,negative = positive+1,0
            else:
                if negative > 0 : positive,negative = negative+1,positive+1
                else: positive,negative = 0,positive+1
            length = max(length,positive)
        return length
S = Solution()
print(S.getMaxLen([1,-2,-3,4]))
print(S.getMaxLen([0,1,-2,-3,-4]))
print(S.getMaxLen([-1,-2,-3,0,1]))
