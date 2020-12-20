#Input: nums = [1,-1,-2,4,-7,3], k = 2
# Output: 7

# Input: nums = [10,-5,-2,4,0,3], k = 3
# Output: 17
# Explanation: You can choose your jumps forming the subsequence [10,4,3] (underlined above). The sum is 17.


# Input: nums = [1,-5,-20,4,-1,3,-6,-3], k = 2
# Output: 0

class Solution:
    def maxResult(self, nums, k):
        n = len(nums)
        ans = 0
        i = 0
        result = []
        result.append(nums[i])
        while i < n:
            m = 0
            if (i+k) < n:
                m = max(nums[i+1:i+k+1])
                result.append(m)
                i = nums.index(m)
            if len(nums[i+1:n]) > 0:
                print(nums[i+1:n])
                m = max(nums[i+1:n])
                result.append(m)
                i = n-1
            else:
                break

        
        # print(result)
        return sum(result)
        # return ans

s = Solution()
print(s.maxResult([1,-1,-2,4,-7,3],2))