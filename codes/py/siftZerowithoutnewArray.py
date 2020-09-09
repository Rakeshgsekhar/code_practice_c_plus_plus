class Solution:
  def moveZeros(self, nums):
    count = 0
    length = len(nums)
    for i in range(length):
      if nums[i] != 0:
        nums[count]=nums[i]
        count +=1

    while count < length:
      nums[count] = 0
      count +=1
        

nums = [0, 0, 0, 2, 0, 1, 3, 4, 0, 0]
Solution().moveZeros(nums)
print(nums)
