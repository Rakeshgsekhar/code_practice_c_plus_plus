class Solution:
    def maxProduct(self, nums):
        n = len(nums)
        if n < 1:
            return 0
        dp_max = [0]*n
        dp_min = [0]*n

        dp_max[0] = dp_min[0] = nums[0]

        for i in range(1,n):
            if nums[i] > 0:
                dp_max[i] = max(dp_max[i-1]*nums[i],nums[i])
                dp_min[i] = min(dp_min[i-1]*nums[i],nums[i])
            else:
                dp_min[i] = min(dp_max[i-1]*nums[i],nums[i])
                dp_max[i] = max(dp_min[i-1]*nums[i],nums[i])

        return max(dp_max)
s = Solution()
print(s.maxProduct([2,3,-2,4]))
print(s.maxProduct([-2,0,-1]))
print(s.maxProduct([0,2]))
print(s.maxProduct([-2]))




