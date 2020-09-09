class Solution:
    def minOperations(self, nums):
        result = 0
        n = len(nums)
        while True:
            zero_count = 0
            i = 0
            while i < len(nums):
                if (nums[i] & 1) > 0:
                    break
                elif nums[i] == 0:
                    zero_count +=1
                i+=1

            if zero_count == n:
                return result
            if i == n:
                for k in range(n):
                    nums[k] = nums[k]//2
                result +=1
            for j in range(i,n):
                if(nums[j] & 1):
                    nums[j] -= 1
                    result +=1


s= Solution()
print(s.minOperations([3,2,2,4]))
