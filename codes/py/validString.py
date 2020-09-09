class Solution:
    def isValid(self, s):
        s= [char for char in s] 
        stringstack = []
        pointer = 0
        if(len(s) == 1):
            return False
        for i in range(0,len(s)):
            if s[i] == '(' or s[i] == '[' or s[i] == '{':
                stringstack.append(s[i])
                pointer += 1
            if s[i] == ')' or s[i] == ']' or s[i] == '}':
                pointer -= 1
                strn = stringstack.pop()
                if s[i] == ')' and strn != '(' :
                    return False
                if s[i] == ']' and strn != '[' :
                    return False
                if s[i] == '}' and strn != '{':
                    return False
        if pointer != 0 :
            return False
        return True


s = Solution()
print(s.isValid("()[]{}"))
                
                
