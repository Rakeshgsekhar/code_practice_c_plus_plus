class Solution:
    def lengthOfLastWord(self, s):
        if s == "" or s == " ":
            return 0
        lsr = s.strip()
        l = lsr.split(' ')
        if len(l) == 0:
            return 0
        else:
            return len(l[len(l)-1])
                

s = Solution()
print(s.lengthOfLastWord("Hello World"))
print(s.lengthOfLastWord(""))
print(s.lengthOfLastWord(" "))
print(s.lengthOfLastWord("a "))
