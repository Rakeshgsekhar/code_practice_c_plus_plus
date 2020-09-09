class Solution:
    def checkPrefix(self,strList,strs,start,end):
        for i in range(0,len(strList)):
            s = strList[i]
            for k in range(start,end+1):
                if s[k] != strs[k]:
                    return False
        return True
    
    def longestCommonPrefix(self, strs) -> str:
        memo = []
        if(len(strs) == 0):
            return ""
        min_len = len(min(strs,key=len))
        #print(min_len)
        prefix = ""
        low , high = 0, min_len-1
        while low <= high:
            mid = int(low +(high-low)/2)
            if self.checkPrefix(strs,strs[0],low, mid):
                prefix = prefix + strs[0][low:mid+1]
                low = mid + 1
            else:
                high = mid -1
        return prefix                
        #for str in  str:
         #   if str


s = Solution()
print(s.longestCommonPrefix(["flower","flow","flight"]))
print(s.longestCommonPrefix([]))
print(s.longestCommonPrefix(["ower","fw",""]))
print(s.longestCommonPrefix(["flower","flow","floweht"]))
