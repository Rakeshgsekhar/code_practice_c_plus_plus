class Solution:
  def moveZeros(self, nums):
    # Fill this in.
    nums = [x for x in nums if x != 0] + [x for x in nums if x == 0]
    print(nums)
    return nums

nums = [0, 0, 0, 2, 0, 1, 3, 4, 0, 0]
Solution().moveZeros(nums)
print(nums)
