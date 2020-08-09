
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        memo = {}
        def checkPattern(textIndex,patternIndex):
            if (textIndex,patternIndex) not in memo:
                if patternIndex == len(p):
                    response = textIndex == len(s)
                else :
                    pattern_match = textIndex < len(s) and p[patternIndex] in {s[textIndex], '.'}
                    if patternIndex+1 < len(p) and p[patternIndex+1] == '*':
                        response = checkPattern(textIndex,patternIndex+2) or pattern_match and checkPattern(textIndex+1,patternIndex)
                    else:
                        response = pattern_match and checkPattern(textIndex+1,patternIndex+1)
                        
                memo[textIndex,patternIndex] = response
            return memo[textIndex,patternIndex]
        return checkPattern(0,0)


s = Solution()
print(s.isMatch('aaaaaaaaaaa','a*'))
