class Solution:
    def maxNonOverlapping(self, nums, target):
        length = len(nums)
        #nums = sorted(nums)
        counter = [0 for i in range(length+1)]
        memo={}
        memo[0] = -1
        targt = 0
        for i in range(length):
            targt +=nums[i]
            temp = targt - target
            counter[i+1] = counter[i]
            if temp in memo:
                print("val:"+str(counter[memo[temp]+1]+1))
                counter[i+1] = max(counter[i+1],counter[memo[temp]+1]+1)
            memo[targt] = i
        print(memo)
        return counter[length]

s = Solution()
print(s.maxNonOverlapping([1,1,1,1,1],2))
print(s.maxNonOverlapping([-1,3,5,1,4,2,-9],6))

print(s.maxNonOverlapping([-2,6,6,3,5,4,1,2,8],10))

#[0,0,0]
print(s.maxNonOverlapping([-5,5,-4,5,4],5))
