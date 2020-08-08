class Solution(object):
  def findDisappearedNumbers(self, nums):
    # Fill this in.
    result = []
    nums = sorted(nums)
    for i in range(0,len(nums)):
        if(i+1 != nums[i]):
            result.append(i+1)

    return result

nums = [4, 6, 2, 6, 7, 2, 1]
print(Solution().findDisappearedNumbers(nums))
# [3, 5]
