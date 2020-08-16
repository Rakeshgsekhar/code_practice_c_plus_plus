class Solution:
    memo = {'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
    def letterCombinations(self, digits):
        digitlist = [i for i in digits]
        combinations = [i for i in self.memo[digits[0]]]
        for i in range(1,len(digitlist)):
            temp = [k for k in self.memo[digitlist[i]]]
            combinations = [ (x+y) for x in combinations for y in temp]
        
        return combinations
s=Solution()
print(s.letterCombinations('23'))
