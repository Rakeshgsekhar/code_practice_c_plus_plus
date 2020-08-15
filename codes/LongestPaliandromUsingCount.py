import collections
class Solution:
    def longestPalindrome(self, s):
        charcount = collections.Counter(s)
        length = odd = 0
        for i in charcount.values():
            if i%2 == 1:
                odd = 1
            length += i //2 *2
        return length+1 if odd else length

s= Solution()
print(s.longestPalindrome("abbccccdd"))
print(s.longestPalindrome("Aa"))
