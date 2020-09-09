class Solution:
    def modifyString(self, s):
        if len(s) == 1:
            if s[0] == '?':
                return 'a'
        s = list(s)
        for i in range(len(s)):
            if s[i] == '?':
                for ch in 'acb':
                    if i == 0 and s[i+1] != ch:
                        s[i] = ch
                        break
                    if i == len(s) - 1 and s[i-1] != ch:
                        s[i] = ch
                        break
                    if (i > 0 and i < len(s)-1) and s[i-1] != ch and s[i+1] != ch:
                        s[i] = ch
                        break
        return ('').join(s)

s = Solution()
print (s.modifyString("?zs"))
print (s.modifyString("ubv?w"))
print (s.modifyString("j?qg??b"))
print (s.modifyString("??yw?ipkj?"))
print (s.modifyString("???yw?ipkj?"))
print (s.modifyString("a?"))
print (s.modifyString("?"))
print (s.modifyString(""))
print (s.modifyString("a"))
print (s.modifyString("?a?ub???w?b"))
print (s.modifyString("wz???a??n"))

