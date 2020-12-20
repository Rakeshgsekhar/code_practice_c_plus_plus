from collections import defaultdict
class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        i = 0
        j = 1
        set = {}
        set[nums[0]] = 1
        sum = nums[0]
        maxsum = sum
 
        while (i < len(nums) - 1 and
            j < len(nums)):
            if nums[j] not in set:
                sum = sum + nums[j]
                maxsum = max(sum, maxsum)
                set[nums[j]] = 1
                j += 1
            else:
                sum -= nums[i]
                del set[nums[i]]
                i += 1
    
        return maxsum
            
