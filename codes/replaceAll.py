class Solution:
    def modifyString(self, s):
        memo = []
        strs = [0]*len(s)
        st = ord('a')
        for i in range(len(s)):
            if s[i] == '?':
                #st = ord('a')
                #print(s[i+1])
                #print(ord(s[i+1]))
                #print(st)
                #if i+1< len(s) and s[i+1] != '?' and st == ord(s[i+1]):
                    #st+=2
                #if i-1 >= 0 and st == ord(s[i-1]):
                    #st = ord('a')
                strs[i] = str(chr(st))
                memo.append(i)
                #st += 2
            else:
                strs[i] = s[i]
                st = ord('a')

        for i in range(1,len(strs)-1):
            if strs[i-1] == strs[i]:
                #if strs[i]
                strs[i] = str(chr(ord(strs[i])+2))
            if strs[i]
        #print(strs)
        return ('').join(strs)

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

