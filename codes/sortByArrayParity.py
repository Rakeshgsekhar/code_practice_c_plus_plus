class Solution:
    def sortArrayByParity(self, A):
        result = [x for x in A if x%2==0]+[x for x in A if x%2!=0]
        return result
s = Solution()
print(s.sortArrayByParity([3,1,2,4]))
