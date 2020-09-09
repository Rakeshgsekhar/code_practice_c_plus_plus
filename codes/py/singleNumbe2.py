class Solution:
    def singleNumber(self, nums):
        #print(sum(list(set(nums))))
        #print(sum(nums))
        #print(sum(list(set(nums)))*3)
        return (sum(list(set(nums)))*3 - sum(nums))//2


s = Solution()
print(s.singleNumber([2,2,3,2]))
print(s.singleNumber([2,2,3,2,3,4,3]))
print(s.singleNumber([0,1,0,1,0,1,99]))
