class Solution:
    def minInsertions(self, s):
        length = len(s)
        openCount = s.count("(")
        closeCount = s.count(")")
        bal = 0
        ans = 0
        if length == openCount:
            return openCount*2
        elif length == closeCount:
            if closeCount %2 == 0:
                return closeCount//2
            else:
                return closeCount//2 + 2
        else:
            for index,i in enumerate(s):
                if i == ')':
                    bal-=1
                    if bal < 0:
                        ans +=1
                        bal +=2
                else:
                    if bal & 1:
                        bal -= 1
                        ans +=1
                    bal +=2
            return ans+bal
        
s = Solution()

print(s.minInsertions("(((((("))
print(s.minInsertions(")))))))))"))
print(s.minInsertions("))())("))
