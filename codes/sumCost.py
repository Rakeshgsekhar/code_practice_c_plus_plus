class Solution:
    def minOperations(self, n):
        nums = [(2*i)+1 for i in range(n)]
        print(nums)
        sums = 0
        median = nums[len(nums)//2]
        for i in nums:
            if i > median:
                sums+=i-median
            else:
                sums +=median-1

        return (sums)

s= Solution()
print(s.minOperations(3))
