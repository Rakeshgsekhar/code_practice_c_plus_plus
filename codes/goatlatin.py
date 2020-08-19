class Solution:
    def buildString(self,s,i):
        vowels = ['a','e','i','o','u']
        result = ""
        if vowels.count(s[0].lower()) > 0:
            result = s+"ma"
        else:
            s=s[1:]+s[0]
            result = s+"ma"
        for i in range(i+1):
                result+="a"
        return result
    
    def toGoatLatin(self, S):
        strlist = S.split(" ")
        for i in range(len(strlist)):
            strlist[i]=self.buildString(strlist[i],i)

        result = " ".join(strlist)
        result = result.strip()
        return result

s= Solution()

s.toGoatLatin("I speak Goat Latin")
