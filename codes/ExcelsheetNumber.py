class Solution:
    def titleToNumber(self, s):
        length = len(s)
        k = 0
        for i in range(length):
            k*=26
            k += ord(s[i])-ord('A') + 1
        return k


s = Solution()
print(s.titleToNumber("FXSHRXW"))
