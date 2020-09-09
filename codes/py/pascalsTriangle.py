class Solution:
    def findFactorial(self,num):
        memo={}
        facto = 1
        temp = num
        if(num ==0):
            return 1
        if num not in memo:
            for i in range(1,num+1):
                facto *=i
            memo[num] = facto
            return facto
        else:
            return memo[num]
                
    def getRow(self, rowIndex):
        result = []
        for i in range(0,rowIndex+1):
            deno = self.findFactorial(i)*(self.findFactorial(rowIndex-i))
            res = int(self.findFactorial(rowIndex) / deno)
            result.append(res)

        print(result)
                                            
                                            
s = Solution()
s.getRow(3)                                                 
