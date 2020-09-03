class Solution:
    def repeatedSubstringPattern(self, s):
        strs = [char for char in s]
        N = len(s)
        for i in range(N//2,0,-1):
            if N % i == 0:
                st = s[0:i]
                rs = ""
                rep = N//i
                for k in range(rep):
                    rs += st
                if rs == s:
                    return True

        return False
S = Solution()
print(S.repeatedSubstringPattern("abab"))
print(S.repeatedSubstringPattern("aba"))
print(S.repeatedSubstringPattern("abcabc"))
print(S.repeatedSubstringPattern("abcabcabcabcabcabcabc"))
print(S.repeatedSubstringPattern("ababaaaaaaa"))
print(S.repeatedSubstringPattern("ababbbb"))
print(S.repeatedSubstringPattern("ababbbb"))
print(S.repeatedSubstringPattern("abab"))
print(S.repeatedSubstringPattern("a"))
print(S.repeatedSubstringPattern("ababba"))
