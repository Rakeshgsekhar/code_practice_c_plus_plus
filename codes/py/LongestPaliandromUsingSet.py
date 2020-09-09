class Solution:
    def longestPalindrome(self, s):
        if s == None or len(s) == 0:
            return 0
        charss = set()
        length = 0
        for i in range(len(s)):
            if s[i] in charss:
                charss.remove(s[i])
                length+=1
            else:
                charss.add(s[i])
        if len(charss) != 0:
            return length*2 +1

        return length*2

s= Solution()
print(s.longestPalindrome("abccccdd"))
print(s.longestPalindrome("Aa"))
